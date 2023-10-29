
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

#### Userstory :

|             |                                                    |
| ----------------- | ------------------------------------------------------------------ |
| <img width="593" alt="Userstory" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/65266ad8-22d9-4c72-89ab-902dc447a113"> |<img width="832" alt="Userstory2" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/978ad02c-aab7-43d4-a253-52710fe359a4">

The user story is natural language description on the of a features or functionalities of the system from the perspective of the user or stakeholder. The main purposes of the userstory are defining the requirements from users perpective such that it captures the users need from the system. Userstory also create a shared language between developers and stakeholders. In addition, userstory are needed to be done in the early stages, allowing for adjustments as more information becomes available. As of testability, userstory provide a clear goal for what needs to be developed and tested, ensuring that the delivered feature meets the user's needs. The userstory states the user or stakeholder that supposed to use this functionality and a description of the expected actions the system must do. It also illustrates the basice flow in detailed steps and what should happen in each step and by whom (User/System). Lastly is the Alternative flow, were it states if errors are triggered and how would the system recover from those errors. In the screenshots above are the userstory of the Electronic Store 111 that represents each actors, description of usecase, the basic flow and the alternative flow.



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
This sequence diagram is the scanProduct which consists of mainly two operations and they are scanProducts and updateCart. The first operation is the scanProducts such which  will take the barcode number which is the productID and quantity as a parameters. The second operation is updateCart, and it will take the productID, productName, quantity, price, and cartID as an input. It will countinously update the specific current cart depending on the cartID and will make calculations on the stock due to the quantity specified. Finally, it will also calculate the new price of the current cart as soon as the product get scanned.

##### 3. Store Manager:
This specific sequence diagram represents several interactions occuring in the order shown on the screenshot. The first operation that will take place is viewInventoryStockLevel() that will output all of the productcs stock level whinin the store. Secondly, is the recordRestock(), that will take inputs (productName,productID, quantity) from the manager about the products details. Thirdly is the creatingNewSupplier() that will invoke the store manager to provide details of the new supplier such as supplierID, companyName, contactDetails. Thirdly is the sendToSupplier() which takes the information about the supllier of a specific products for restock orders.Lastly is the orderStockProducts(). This operation will have a paramaters such as productID, quantity, restockProductsID and will include the suppliers information taken earlier which will allow it to send orders to the correct supplier.

##### 4. Supplier:
In this diagram it can clearly be seen that it includes two operations occuring in a specific order. The first operation will be processStoreOrder() that will take three parameters which are orderID, productID, quantity. This will allow the system to know that the supplier has recieved and now processing the requested order. The second operation is called provideDeliveryInfo() which will take three parameters from the supplier. Those parameters are the order details such as orderID, date expected and wareHouseID which then can be used to update the order status.

#### Conceptual Class Diagram:
This diagram is a structure diagramthat represents a high level view of of the conceptual structure of the system. Its purpose is to help in domain understanding such that stakeholders and developers understand the main concepts of the domain and how these concepts are related to each other. Conceptual class diagram also frames the problem such that stakeholders can see the main elements involved. This type of diagram mainly focuses on illustrating key classes, and their relationships.
Elements in Conceptual Class DIagram:
1. key Entities: the primary elements in the domain (Rectangles).
2. Relationships: It shows how classes are related together which can be associations, aggregations, compositions, or generalizations (arrows).
3. Multiplicity: It shows how one instance of one class that can related to one instance of another class.
4. Attributes: It describes the value that an instance of a class can have and these attributes are associated with their type.

In the screenchot below is the conceptual class diagram of the Electronic Store 111 system: 

<img width="602" alt="Conceptual Class Diagram" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/68486953-50b1-4757-8ae6-0ea017b0d4a6">


Classes:
1. Member: The customers who signup in store or online.
2. Customer: Online customers or instore customers.
3. Order: Contains data about the order.
4. Cart: Its the basket that contains the selected product.
5. Product: Items that are available for sale.
6. Feedback: Comments or rating from the customers depending on their expercience.
7. Receipt: It holdes a full description about the purchase including the payment.
8. Cashier: Employee that is reponsible for the checkout process.
9. Inventory: A collection of products within the stock of the store.
10. Users: These are individuals encompassing roles such as customers, cashiers, store managers, and suppliers, each with distinct access and permissions.
11. Transaction: A recorded event representing the exchange the store goods for money.
12. SupplierOrder: A record of the products needed from the supplier.
13. StoreManager:Person who is responsible of overseeing the store operations, including inventory and reports.
14. Supplier: The person who is responsible for supplying the store.
15. ReturnedProducts: A collection of the goods that were returned by the customers.
16. Report: A document that is represents the information and data about the store.
17. RestockProducts: A collection of the products that are needed to be supplied.

Relationships:
1. Member-Customer (One to One ): A member should be a customer.
2. Member-Users (One to One): A member must be also one of the users.
3. Customer-Users (One to One): A customer can be related to a user in the system.
4. Customer-ReturnedProducrs(One to many); A customer can return many products.
5. Customer-Order (One to Many): a customer can make many orders within the system.
6. Customer-Feedback (one to many): A customer can provide more than one feedback
7. Order-Cashier: (Many to One): Many orders can be checkedout by the same cashier.
8. Order-Cart (One to One): Each order contains one cart that include all of the products involved.
9. Order-Product (One to Many): An order can contain one or more products.
10. Product-Inventory (Many to One): Many products are stored in one inventory of the store.
11. Feedback-Store Manager (Many to One): Feedback can be accessed and viewed by the mamanger to perform actions.
12. Receipt-Cashier (Many to One): Many receipts will be provided to the system.
13.  Receipt-Transaction (One to One): Each receipt must be associated with one transaction
14.  Cashier-Transaction (One to many): A cashier can process more than one transaction.
15.  Inventory-Store Manager (One to One): One main inventory of the store can be managed by the store manager.
16.  Inventory-SupplierOrder (One to Many): The products in the inventory will be used to place an order for the supplier.
17.  Users-Memeber (One to One): The users can belong to a member.
18.  Users-Customer (One to One): The users are customers in the system
19.  Users-Store Manager (One to One): A user can be a store manager.
20.  Users-Supplier (One to One): A user may be one of the suppliers
21.  Return Products-Customer (Many to One): a customer can return many products
22.  Store Manager-Feedback(One to Many): A store manager can access many feedback provided by the customers
23.  Store Manager-Report(One to Many): A store manager can generate many reports and view them.
24.  Store Manager-Restock Products (One to Many): A store manager can request many restock orders for the products

#### OCL Contracts:

| Name Of COntract             | Example of the Contracts                                                   |
| ----------------- | ------------------------------------------------------------------ |
| Updating Loyalty Points |<img width="580" alt="OCL - LoatltyPoints" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/d0c9e081-d9b1-4da5-9c24-661b2195c424">
| Membership Status |<img width="490" alt="OCL - MembershipStatus" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/2a5d476f-426d-490a-a88a-413b36456917">
| Scan Product |<img width="550" alt="OCL - ScanProduct" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/f21f238b-24a4-4d47-8f47-f3405bf6aaa1">
| Save Feedback |<img width="578" alt="OCL - SavefFeedback" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/761c7353-1dfa-4524-b758-5533693184d6">

The Object Constraint Language (OCL) serves an extension to UML that allows for more precise rules and conditions for UML models. It lets us set clear constraints on system attributes and relationships.  One of its cardinal roles is to allow for the clear definition of constraints, ensuring conditions within a system remain consistently true, particularly in relation to attributes or relationships of classes. OCL provides a robust mechanism to perform queries on UML models, extracting specific data or subsets as needed. OCL also outlines both what needs to happen before an operation starts (preconditions) and the expected results after it ends (postconditions). IN the screenshot above shows some of the OCL contracts of the Electronic Store 111 system.

1. Updating Loyalty Points: It takes two parameters of points and memberID and fincds the desired member depending on the specific ID. The precondition such that this ID should exists. Finally, for the post condition it will add the points to the current value.  
2. Membership Status: The pervious contract takes in the memberID in the code and this contract will desplay the data within this instance which matches the customerID. Precondition is that this member should exists and the post condition is showing the instance details.
3. Scan Product: This contract will take two inputs which are barcode and quantity. the barcode is considered as the productID were it will be used to retrieve the product instance that matches the same productID. The contract will check the current level of the stock and if the condition is satified, it will used a function thats called Updatecart which will update the current cart. The precondition is that the quantity should be greater than zero and the product exists. In the other hand is the post condition which will checks the quantity and update the cart.
4. Save Feedback: It will take two parameters which are the customerID and the textFeedback. Perviously I took the customer feedback and saved it in a variable with other important data. This contract will create a new object of feedback class and fill in the required data that have been entered by the user. The precondition is that the parameters shouldnt be ampty and the post condition is to create the new object and save data.


#### Prototyping and Validation:

| Name Of function in the prototype             | Example of the prototype                                                   |
| ----------------- | ------------------------------------------------------------------ |
| Updating Loyalty Points |<img width="827" alt="Prototype - LoatltyPoints" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/8b87f1ca-4c75-4aa5-a496-f45c8c46e52e">
| Membership Status |<img width="689" alt="Prototype - MembershipStatus" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/90cb70cd-ebde-447d-a60b-b48cc4817002">
| Scan Product |<img width="892" alt="Prototype - ScanProduct" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/0d5e7c73-ea0a-4a18-8a52-0ad354adfe33">
| Save Feedback |<img width="836" alt="Prototype - SavefFeedback" src="https://github.com/gj1997x/Software-Requirements/assets/148683770/bf55b678-3dc5-4d24-81ae-bf803e2ed7ad">
