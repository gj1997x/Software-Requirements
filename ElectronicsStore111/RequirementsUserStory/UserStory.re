
As a customer, I want to easily browse products, so that I can find products that Iam looking for easily
{
	Basic Flow {
		(User) 1. The customer shall navigate easily through system.
		(User) 2. The customer shall view product lists.
		(System) 3. The system shall show all product available with their details.
		
	}
	Alternative Flow {
		A. At any time, System fails :
		1. The system will refresh page automatically for user.
	}
}
As a customer, I want to easily checkout with various payments, so that payments could be more flexible
{
	Basic Flow {
		(User) 1. The customer shall enters cart page or approaches checkout counter in a physical store.
		(System) 2. The system shall displays a summary of selected products with total cost.
		(System) 3. The system shall present different types of payment methods.
		(User) 4. The Cashier in store or customer online shall enter payment details.
		(System) 5. The system shall present different types of payment methods.
		(System) 6. The System shall provide a payment confirmation.
			//(Select) 6a. Cash Payment:
			//(Select) 6b、 Credit Card Payment:
			//(Select) 6c、 Apple Pay Payment:
	}
	Alternative Flow {
		A. At any time, Payment fails :
		1. The system will provide an error of unsuccessful transaction.
			a1. System detects error in transaction.
		B. At any time, System fails :
		1. The system will enter recovery mode and will restart with a restore of last information.
			b1. The system stores current state as error hasbeen is triggered.
				1. Restore back from last saved state.
	}
} 
As a customer, I want to sign up for a membership, so that I can earn reward points
{
	Basic Flow {
		(User) 1. The customer shall proceeds to checkout as a guest on online or at physical store.
		(User) 2. The customer shall join a loyalty membership program during checkout.
		(System) 3. The system shall output terms and agreement.
		(User) 4. The customer shall provides their information and agrees to membership terms in store or online.
		(System) 5. The system shall create new record to membership list for new customers.
		(System) 6. The system shall add new information of specified customer to membership list.
	}
	Alternative Flow {
		A. At any time, User provide existing or invalid information :
		1. System will validate data depending on its type.
		2. The system provides a error message depending on type of error made.
		
	}
}
As a customer, I want to return products, so that I will be satisfied with my purchases
{
	Basic Flow {
		(User) 1. The customer shall select products from order history or bring goods to a cashier desk.
		(System) 2. The system shall provide a purchase details.
		(User) 3. The customer or cashier shall apply for return request.
		(System) 4. The system shall record this return request.
		
	}
	Alternative Flow {
		A. At any time, An invalid request might occur :
		1. The system will validate this return request.
		2. The system will notify current cashier in store or user with a specific error message.
	}
}
As a customer, I want to review my cart and remove items before checkout
{
	Basic Flow {
		(User) 1. The customer shall go to a cashier for checkout in store or online.
		(System) 2. The system shall update a cart on checkout accordingly.
		(System)3. The system shall provide a summary of new updated cart.
		(User)4. The customer or cashier shall remove a product from cart list.
			//(Loop 2 ~ 4 until no input)
	}
	Alternative Flow {
		A. At any time, Removal error :
		1. The system will detect error in removal of products.
			a1. The system stores its current state.
				1. Restore back to last saved state.
	}
}
As a customer, I want to give a feedback, so that electronics store can provide improvement to their services
{
	Basic Flow {
		(User) 1. The Customer shall checkout and submit their feedback to any cashier or system.
		(System) 2. The system shall record any feedback and store it.
		(System)3. The system shall display saved feedback from systems records.
	}
	Alternative Flow {
	}
}

As a loyalty member, I want to check my membership status, so that I can have a clear information on my member account
{
	Basic Flow {
		(User) 1. The loyalty member shall logs into their account or any time at checkout asks a cashier.
		(System) 2. The system shall validate data and provide successful login.
		(System) 2. The system shall provide information from membership records to customers.
	}
	Alternative Flow {
		A. At any time, Unsuccessful login :
		1. The system validation of data is false.
		2. System pops up message stating that validation unsuccessful.
		3. The system asks again users to enter their data.
	}
}
As a cashier, I want to handle various payment methods, so that I can perform different payment methods depending on customers preferences
{
	Basic Flow {
		(User) 1. The customer shall presents items for purchase and indicates their preferred method of payment to a cashier or at checkout on online website.
    	(System) 2. The POS system or online website shall displays total amount due.
    	(User) 3. The customer shall provides any required details or instrument for a chosen payment method.
    	(System) 4. The system shall processes payment which includes validating payment information and securing authorization.
    	(System) 5. The system shall update all of inventory list of each item.
	}
	Alternative Flow {
		A. At any time, Payment Decline :
		1. The system detects a decline in any payment.
		2. The system will determines that payment method is declined or invalid.
    	3. The system must generates a notification or alert indicating a payment issue.
    	4. The customer provides an alternative payment method or rectifies current problem with this issue.
    	5. The system attempts to process a new payment method.
	}
}
As a cashier, I want to handle purchases using POS system, so that I can process sales
{
	Basic Flow {
		(User) 1. The cashier shall begins a new transaction on POS system.
    	(User) 2. The cashier shall scans or manually enters each product a customer wants to purchase into POS system.
    	(System) 3. The POS shall system calculates a total amount due.
    	(User) 4. The cashier shall informs a customer of total amount and asks for any preferred method of payment.
	}
	Alternative Flow {
		A. At any time, Invalid Product Entry :
		1. The POS system detects an invalid product entry.
    	2. The system alerts a cashier of any invalid product entry.
    	3. The cashier attempts to rescan a product or manually enter its details.
    	4. The system updates current transaction with correct product or waits for another action.
    	B. At any time,Transaction Cancellation :
    	1. The cashier or customer decides to cancel a transaction.
    	2. The POS system stops any current transaction and returns to its initial state and discards any entered data.
	}
}
As a cashier, I want to provide receipts, so that a customer can have a summary of a purchase
{
	Basic Flow {
		(System) 1. Once a transaction is successfully processed electronics store system or online website shall generates a summary of any purchase.
    	(User) 2. The cashier shall verifies any details to ensure that purchase summary is correct.
    	(System) 3. The system shall prompts current user for a preferred receipt format.
    	(User) 4. The cashier shall asks any customer how they would like to receive their receipt.
    	(User) 5. The customer shall provides their choice and in some situations its necessary they also need to provide additional details.
    	(System) 6. The system shall prints a receipt or sends it electronically.
    	(User) 7. The cashier shall provides a printed receipt to any customer or confirms that an electronic receipt has been sent.
	}
	Alternative Flow {
		A. At any time, Print receipt failure :
		1. The system detects a printer malfunction.
    	2. The system alerts a cashier of a printer issue.
    	3. The cashier informs customers of any problem and offers them to send an receipt electronically or wait for this issue to be resolved.
		B. At any time,Email delivery failure :
		1. The system encounters a problem delivering an electronic receipt.
    	2. The system notifies any cashier of a delivery failure.
    	3. The cashier informs current customer and requests to verify an email address or offers a printed receipt as an alternative.
    	4. The system tries to resend an electronic receipt or proceeds to print and based on a provided solution.
	}
}
As a Store Manager, I want to manage inventory effectively, so that we can avoid out of stock products
{
	Basic Flow {
		(User) 1. The Store Manager shall accesses inventory management module within stores system.
    	(System) 2. The system shall displays current stock levels of all products including product details.
    	(User) 3. The Store Manager shall review inventory data to identify items with stock levels nearing their reorder points.
    	(User) 4. The Store Manager shall initiates a restock order.
    	(System) 5. The system shall records any restock order and updates current anticipated stock levels for those products.
    	(User) 6. The Store Manager shall confirms an order details and submits it to any appropriate supplier or central warehouse.
    	(System) 7. The system shall sends orders and provides a confirmation message to any approperiate Store Manager.
    		//(Loop 5 ~ 7 until no reorder stock)
	}
	Alternative Flow {
		A. At any time, Supplier out of stock :
		1. The supplier system returns a message indicating that items are out of stock.
    	2. The Store Manager decides to either wait for an item to be back in stock or order from a different supplier or seek alternatives.
    	3. Depending on a Store Managers decision electronic store system takes an appropriate action.
		B. At any time,Inverntory Discrepancies :
		1. The Store Manager identifies discrepancies between all systems records and any physical count.
    	2. The Store Manager conducts inventory check.
    	3. The Store Manager updates inventorys data within electronics store system.
    	4. The system updates and adjusts stock levels accordingly in inventory.
	}
}
As a Store Manager, I want to access customer feedback, so that we can enhance a customers shopping experience
{
	Basic Flow {
		(User) 1. The Store Manager shall login to customer feedback section.
    	(System) 2. The system shall displays a list of recent customer feedback entries and including details.
    	(User) 3. The Store Manager shall review a feedback entries to understand customers opinions and areas of concern.
    	(User) 4. The Store Manager shall highlights specific feedback that warrants immediate attention or follow up.
    	(User) 5. The Store Manager shall creates tasks or directives to address a concern or suggested improvements.
    	(System) 6. The system shall records a task and provides a confirmation to Store Manager.
    	(User) 7. The Store Manager shall respond to certain feedback directly acknowledging a feedback and updating customers on potential changes or resolutions.
    	(System) 8. The system shall send a response to a customer and logs any communication.
	}
	Alternative Flow {
		A. At any time, Negative feedback actions :
		1. The system indicates a negative feedback and flags it for immediate action.
		2. The Store Manager reviews any flagged feedback promptly and initiates actions or resolutions more urgently.
	}
}
As a Store Manager, I want to view different types of reports, so that I can see my business progress
{
	Basic Flow {
		(User) 1. The store manager shall login and navigates to view reports section.
    	(System) 2. The system shall display a list of available report types.
    	(User) 3. The manager shall select a desired type of report.
    	(System) 4. The system shall retrieves data and generates a report.
    	(User) 5. The store manager shall review reports to assess businesses progress and performance.
	}
	Alternative Flow {
		A. At any time, Reports Generation Failed :
		1. The system detects an error and informs produces an error message.
    	2. The system logs an error for technical review.
    	3. The manager may retry accessing reports again or contact technical support.
	}
}
As a Supplier, I want to process orders within this store, so that I can fulfil them accurately
{
	Basic Flow {
		(System) 1. The system shall triggers a new order for a specific product or set of products from any Supplier.
    	(System) 2. The system shall consolidates an order details including product IDs and thier quantities with other specific information.
    	(System) 3. The system shall send a notification to specific Supplier indicating theres a new order awaiting their confirmation.
    	(User) 4. The Supplier shall login to electronics store supplier portal to review any order details.
    	(User) 5. The Supplier shall confirms an orders details and ensuring they have a specific items in stock and can meet a delivery timeline.
    	(User) 6. The Supplier shall acknowledge any order and provides an expected shipping date.
    	(System) 7. The system shall logs all acknowledgement and notifies electronics store of an order status and expected delivery date.
	}
	Alternative Flow {
		A. At any time, Supplier nsufficient stock :
		1. The Supplier updates an order status to Insufficient Stock and provides an estimated date for of any stock that will be available.
    	2. The system notifies electronis store about a stock issue and any provided timeline.
    	3. The store can choose to wait for any stock or modify an order or go for alternatives.
	}
}

As a Supplier, I want to view new orders placed by electronics store, so that I can process and ship them promptly to meet store demands
{
	Basic Flow {
		(User) 1. The supplier shall enter electronics store systems portal.
		(System) 2. The system shall validate approperiate supplier credentials.
		(System) 3. The system shall view a products orders related to any specific supplier.
	}
	Alternative Flow {
	}
}


User Requirements:
{
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
		
}

System Requirements:
{
	1.	The system shall store and manage details of customers in the membership list.
	2.	The system shall add, remove, and update customer information within the membership list.
	3.	The system shall Support for various payment methods
	4.	The system shall (e.g., credit card, debit card, cash, etc.)
	5.	The system shall have backend process to handle and validate payment transactions seamlessly.
	6.	The system shall differentiate between various user roles (e.g., customer, cashier,store manager,supplier).
	7.	The system shall provide forms for user input for all feedbacks.
	8.	The system shall automatically or manually categorize feedback, especially flagging those that require immediate attention
	9.	The system shall add, update, or remove products in the inventory.
	10.	The system shall initiate a new cart for customers and allow additions or removal of products.
	11.	The system shall integrate with scanning devices for in store purchases or online product selection mechanism for adding items to the cart.
	12.	The system shall monitor stock levels for all products.
	13.	The system shall perform computations on sales and inventory data and generate reports.
		
}

Non-functional requirements:
{
	1. The system should respond quickly to user interactions, especially during peak times. 
	2. The system should be available all the time and have a high uptime. 
	3. The user interface should be intuitive and user-friendly for all actors. 
	4. The system should encrypt sensitive customer data in the database. 
	5. The system should be scalable to handle growth in products, customers, and transactions. 
	6. The system system should be easily deployable with low downtimes during updates or changes. 
	7. The system shall ensure that all transactions made are accurate and there will be no data corruption. 
	8. The system shall integrate with other systems such as the shipping or logistic systems. 
	9. The system shall be capable of recovering from any system failure. 
}

