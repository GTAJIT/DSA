import conf from "../conf/conf";
import { Client, Account, ID } from "appwrite";

export class AuthService {
  client = new Client();
  account;

  constructor() {
    this.client.setEndpoint(conf.appwriteUrl).setProject(
      conf.appwriteProjectId
    );
    this.account = new Account(this.client);
  }

  async createAccount({ email, password, name }) {
    try {
      const userAccount = await this.account.create(
        ID.unique(),
        email,
        password,
        name
      );
      if (userAccount) {
        // call login
        return this.logIn({ email, password });
      } else {
        return userAccount;
      }
    } catch (error) {
      console.log(error);
    }
  }

  async logIn({ email, password }) {
    try {
      return await this.account.createEmailPasswordSession(email, password);
    } catch (error) {
      console.log(error);
    }
  }

  async getCurrentUser(){
    try {
        return await this.account.get()
    } catch (error) {
        console.log(error);
    }
    return null;
  }

  async logOut(){
    try {
        await this.account.deleteSessions()
    } catch (error) {
        console.log(error);
    }
  }
  async logOutCurrent(){
    try {
        await this.account.deleteSession('session')
    } catch (error) {
        console.log(error);
    }
  }
}


const authService = new AuthService();
export default authService;