import random


# usage of class     --------------> Done
# usage of list      --------------> Done
# usage of function  --------------> Done
# usage of exception handling -----> Done
# usage of file handling ----------> Done
# usage of regular expression -----> Done --> using split function


class PhonePe:

    def __init__(self):
        self.main_menu()

    @staticmethod
    def read_file():
        user_id_list = []
        upi_id_list = []
        ac_blc_list = []
        file = open("PhonePeData.txt", "r")
        lines = file.readlines()
        print(lines)
        for line in lines:
            information = line.split()
            upi_id_list.append(information[0])
            ac_blc_list.append(float(information[1]))
            user_id_list.append(information[2])
        return user_id_list, upi_id_list, ac_blc_list

    @staticmethod
    def create_upi(user_id_list, upi_id_list, ac_blc_list):
        user_id = input("Please enter your user_id: ")
        print("Your user_id : ", user_id)
        user_id_list.append(user_id)
        upi_id = str(random.randint(1000000, 9999999))
        print(f"your UPI ID : {upi_id}@ybl")
        upi_id_list.append(str(upi_id) + "@ybl")
        ac_blc_list.append(0.0)
        return user_id_list, upi_id_list, ac_blc_list

    @staticmethod
    def delete_upi(user_id_list, upi_id_list, ac_blc_list):
        upi_id = input("\nEnter your upi id : \n")
        index = 0
        found = False
        for i in upi_id_list:
            if i == upi_id:
                found = True
                break
            index = index + 1
        if found:
            print("\nYour UPI Id deleted successfully ", user_id_list[index], "\n")
            del user_id_list[index]
            del upi_id_list[index]
            del ac_blc_list[index]
        else:
            print("\n-- Error -- No Account does not exist \n")
        return user_id_list, upi_id_list, ac_blc_list

    @staticmethod
    def send_money(user_id_list, upi_id_list, ac_blc_list):
        upi_id = input("\nEnter your UPI Id : \n")
        index = 0
        found = False
        for i in upi_id_list:
            if i == upi_id:
                found = True
                break
            index = index + 1
        if found:
            problem = True
            while problem:
                try:
                    send_amount = float(input(f"Enter the amount you want to send"
                                              f" {user_id_list[index]}: "))
                    if send_amount < 0:
                        print("ERROR enter positive number only")
                        break
                    amount = ac_blc_list[index] - send_amount
                    if amount > 0:
                        ac_blc_list[index] = ac_blc_list[index] - send_amount
                        receiver_upi_id = input("Enter the receiver's UPI Id: ")
                        index_r = 0
                        for R in upi_id_list:
                            if R == receiver_upi_id:
                                break
                            index_r = index_r + 1
                        ac_blc_list[index_r] = ac_blc_list[index_r] + send_amount
                        print(f" Sending money to {user_id_list[index_r]}")
                        print(" \n Transaction Successful!")
                        print(f" Amount of Rs {send_amount}"
                              f" is sent to {user_id_list[index_r]}"
                              f" from {user_id_list[index]} \n")
                        problem = False
                    else:
                        print("Unfortunately you don't have a sufficient funds",
                              user_id_list[index])
                        print(f"Your Current Balance is Rs "
                              f"{ac_blc_list[index]}")
                        print("")
                        break
                finally:
                    return user_id_list, upi_id_list, ac_blc_list
        else:
            print("\n Sorry that account number does not exist \n")
            return user_id_list, upi_id_list, ac_blc_list

    @staticmethod
    def check_money(user_id_list, upi_id_list, ac_blc_list):
        upi_id = input("\nEnter your UPI Id : ")
        index = 0
        found = False
        for i in upi_id_list:
            if i == upi_id:
                found = True
                break
            index = index + 1
        if found:
            print(f"{user_id_list[index]} Your Balance is Rs {ac_blc_list[index]}")
        else:
            print(" UPI Id does not exist! ")

    @staticmethod
    def exit(user_id_list, upi_id_list, ac_blc_list):
        print("Thank You For Using PhonePe")
        quit_file = open("PhonePeData.txt", "w")

        for i in range(len(upi_id_list)):
            save = str(upi_id_list[i]) + " " + str(ac_blc_list[i]) + " " + str(user_id_list[i]) + "\n"
            quit_file.write(save)
        quit_file.close()

    def main_menu(self):
        user_id_list, upi_id_list, ac_blc_list = self.read_file()
        print("______Welcome to PhonePe______")
        option = 0
        while option != 5:
            menu_list = ["1. Create upi", "2. Delete upi", "3. Send Money",
                         "4. Check balance", "5. Quit"]
            user_input = False
            for options in menu_list:
                print(options)
            while not user_input:
                try:
                    option = int(input("Please enter an option: "))
                    if 0 < option < 6:
                        user_input = True
                    else:
                        print("\nPlease enter a number greater than 0 and less than 6\n")
                        for option in menu_list:
                            print(option)
                except:
                    print("\n Error ! only enter 1 to 5 \n")
                    for option in menu_list:
                        print(option)
            if option == 1:
                user_id_list, upi_id_list, ac_blc_list = self.create_upi(user_id_list, upi_id_list, ac_blc_list)

            elif option == 2:
                user_id_list, upi_id_list, ac_blc_list = self.delete_upi(user_id_list, upi_id_list, ac_blc_list)

            elif option == 3:
                user_id_list, upi_id_list, ac_blc_list = self.send_money(user_id_list, upi_id_list, ac_blc_list)

            elif option == 4:
                self.check_money(user_id_list, upi_id_list, ac_blc_list)

            elif option == 5:
                self.exit(user_id_list, upi_id_list, ac_blc_list)


obj = PhonePe()
