
# Electronic Store 111

The Electronic Store 111 system is a comprehensive solution designed to streamline and optimize operations of a Electronic store, enhancing both in-store and potential online shopping experiences.

### Key Components:

1. Point of Sale (POS) System: Allows cashiers to handle diverse payment methods and process sales efficiently. Generates receipts, detailing purchases for customers.

2. Inventory Management: Enables store managers to keep track of stock levels, receive alerts for low-stock items, and manage inventory. The system also facilitates the addition of new products from suppliers.

3. Feedback Mechanism: Allows customers and suppliers to provide feedback on various aspects of their shopping or business experience. The system processes this feedback and flags those that need immediate action.

4. Report Generation: Provides store managers with different types of reports (Sales, Inventory, Feedback, etc.) to assess business progress and performance.

5. Customer Operation: Customers can have the opportunity to become members of the Electronic Store 111 and get benefits from the loyalty points. The customer will have the ability to navigate and browse ot search for products. The customer can view the cart and make some modification on the cart. They also have the choice to choose between different types of payment methods .Feedbacks can also be taken into the system for further actions.

6. Shopping Cart System (for potential online shopping): Lets customers add, edit, or remove items in their cart. This can be used both for online orders and potentially for in-store scan-as-you-shop functionalities.

7. Stock Alert System: Monitors the stock levels of products and sends alerts when stock reaches below the defined threshold, ensuring items are reordered in time.

8. Order Management for Suppliers: Ensures suppliers receive clear and precise orders, facilitating accurate fulfillment of the store's requirements.

### User Requirements:

Customer:
1.	Browse products easily.
2.	Flexible payment options during checkout.
3.	Capability to sign up for a membership.
4.	Option to return products.
5.	Review items in the cart and have the option to remove or them.
6.	The user can provide feedbacks for the electronics store.
7.	The user can check the status of their membership and see relevant information on their member account.

Cashier:
8.	Handle multiple payment methods.
9.	Use a Point Of Sale (POS) system for handling purchases.
10.	Provide receipts for customers summarizing their purchase.

Store Manager:
11.	Effective inventory management tools and functionalities.
12.	Access and review customer’s feedback.
13.	View various types of reports related to sales and stock.

Supplier:
14.	Process orders made by the electronics store.
15.	View new orders placed by the electronics store.

### System Functional Requirements:

1.	The system shall store and manage details of customers in the membership list.
2.	The system shall add, remove, and update customer information within the membership list.
3.	The system shall Support for various payment methods
4.	The system shall (e.g., credit card, debit card, cash, etc.)
5.	The system shall have backend process to handle and validate payment transactions seamlessly.
6.	The system shall differentiate between various user roles (e.g., customer, cashier, store manager, supplier).
7.	The system shall provide forms for user input for all feedbacks.
8.	The system shall automatically or manually categorize feedback, especially flagging those that require immediate attention
9.	The system shall add, update, or remove products in the inventory.
10.	The system shall initiate a new cart for customers and allow additions or removal of products.
11.	The system shall integrate with scanning devices for in store purchases or online product selection mechanism for adding items to the cart.
12.	The system shall monitor stock levels for all products.
13.	The system shall perform computations on sales and inventory data and generate reports.


### System Non-Functional Requirements:

1. The system should respond quickly to user interactions, especially during peak times. 
2. The system should be available all the time and have a high uptime. 
3. The user interface should be intuitive and user-friendly for all actors. 
4. The system should encrypt sensitive customer data in the database. 
5. The system should be scalable to handle growth in products, customers, and transactions. 
6. The system system should be easily deployable with low downtimes during updates or changes. 
8. The system shall ensure that all transactions made are accurate and there will be no data corruption. 
9. The system shall integrate with other systems such as the shipping or logistic systems. 
10. The system shall be capable of recovering from any system failure.

### Explaination:

#### Usecase Diagram:

<img width="742" alt="Use Case Diagram" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/072ad39e-147c-41ad-a653-cb7bd4f56fc3">

The purpose of usecase diagrams is to shows a highlevel overview of the usecases, actors and their interactions within the system. In the image above it can be clearly seen that the actors within the system are Customer/LoyaltyMember which can be guest or member, Cashier, Store Manager, Supplier and all of these actors belong to User. Each actor has a specific functions that can perform depending on their role in the system. There are in total 22 usescases in the system which each usecase provide a function in the Electronic store 111 system. Each actor is associated with a specific usecase that represents the functions that can be done on the systems. The Customer/LoyaltyMember is associated with signup, browseProducts, checkOut, paymentValidation, returnProduct, reviewCart, modifyCart, membershipStatus and giveFeedback. The Cashier is associated with scanProducts, processCheckout, processPayment, processReturn and printReceipt. The Store Manager can viewReports, manageInventory and accessFeedback. The Supplier can interact with the system by proccessOrders, viewNewOrders. Lastly, is the User which consist of all of the actors within the system such that their main interaction within the system is the systemLogin.

#### System Sequence Diagram:

##### Description: 

The sequence diagram is used to visualize the interactions between different actors in a system which include (Customer/Loyalty Member,Cashier, Store Manager and Supplier). This captures the interactions representing their order within the system. Sequence diagrams also clarify the requirements such that it can be as a tool of communication between the stalk holder and the developer. This result of having a clear understanding of how different parts of the system should interact. Furthermore, during the development the sequence diagram can be considered as a reference for the developer which ensures that these interactions are coded correctly. Finally, one of the main purpose of having sequence diagram is that it can be part of the systems documentation that can serve as a reference for future improvements on the system. In the screenshots below are examples of sequence diagrams and which actors are interacting with the system on a specific usecase with an illustrations of the interactions.

| Actors             | Example of the Sequence Diagram Of usecase                                                   |
| ----------------- | ------------------------------------------------------------------ |
| Customer/LoyalMember |<img width="467" alt="returnProducts SSD" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/d9c2b7d2-512c-4436-b67a-10b01367b53a">
|Cashier |<img width="538" alt="scanProducts SSD" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/909467d4-fd3d-463d-9a22-5c6e39434757">
| Store Manager |<img width="542" alt="manageInventory SSD" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/64dfc7aa-16e2-49fc-9a4e-83c111846ad0">
| Supplier |<img width="391" alt="ProcessOrders SSD" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/5e8a966c-3565-4b0e-8154-a493e6625884">


##### 1. Customer/LoyalMember - Return Product: 
On this specific sequence diagram there are four main operations that are involved. The first operation getTransaction which will take an input from the user which is the transactionID that user had when first he/she bought the product. The second operation is productID which will take the productID from the user that they want to return. The third operation is getReason which will take the reson of return from the user. The las operation saveReturn eill take as input the customerID from the system and the three parameters taken from the user which will save them in the systems database for further actions.

##### 2. Cashier:
This sequence diagram is the scanProduct which consists of mainly two operations and they are svanProducts and updateCart. The first operation is the scanProducts such which  will take the barcode number which is the productID and quantity as a parameters. The second operation is updateCart, and it will take the productID, productName, quantity, price, and cartID as an input. It will countinously update the specific current cart depending on the cartID and will make calculations on the stock due to the quantity specified. Finally, it will also calculate the new price of the current cart as soon as the product get scanned.

##### 3. Store Manager:


##### 4. Supplier:
