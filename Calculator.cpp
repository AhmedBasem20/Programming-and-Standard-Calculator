# include <iostream>
using namespace std;

int main()
{
	calculator:
	char replyc;
	system("color F0");
	char Ans, reply, O, rep;
	double x, y;

	cout << "\t\t\t\t\t\tWelcome to Our Calculator App\n\n";

	cout << "If you want to use (Standard) Calculator enter ((s))\n\n" << "If you want to use (Number Systems Conversions) Calculator enter ((n))\n";
	cin >> Ans;
	system("cls");

	if (Ans == 's' || Ans == 'S')
	{
	standart:
		char replys;
		system("color F1");
		cout << "Which the Number System do you want to perform operations on it ?\n" << "if you want Decimal enter ((d))\n" << "if you want Octal enter ((o))\n" << "if you want Hexadecimal enter ((h))\n" << "if you want Binary enter ((b))\n";
		cin >> reply;
		system("cls");

		if (reply == 'd' || reply == 'D')
		{

			do
			{
				system("color F2");
				cout << "Enter Number \n";
				cin >> x;

				cout << "Enter the sign of opration ((+)) , ((-)) , ((*)) , ((/)) , ((^)) , and Sqrt ((q))" << "\n";
				cin >> O;

				cout << "Enter Number \n";
				cin >> y;

				if (O == '+')
				{
					system("color 20");
					cout << "The result of " << x << " + " << y << " = " << x + y << "\n";
				}
				else if (O == '-')
				{
					system("color 20");
					cout << "The result of " << x << " - " << y << " = " << x - y << "\n";
				}
				else if (O == '*')
				{
					system("color 20");
					cout << "The result of " << x << " * " << y << " = " << x * y << "\n";
				}
				else if (O == '/')
				{
					system("color 20");
					cout << "The result of " << x << " / " << y << " = " << x / y << "\n";
				}
				else if (O == '^')
				{
					system("color 20");
					int result = 1;
					for (int i = 0; i < y; ++i)
					{
						result *= x;
					}
					cout << "The result of " << x << " ^ " << y << " = " << result << "\n";
				}
				else if (O == 'q' || O == 'Q')
				{
					system("color 20");
					cout << "The result of " << x << " * " << " sqrt of " << y << " = " << x * (sqrt(y)) << "\n";
				}
				else
				{
					system("color 40");
					cout << "Error!!!!!!!!!!\n";
				}
				cout << "Are you want to Continue if yes enter ((y))\n";
				cin >> rep;
				system("cls");

			} while (rep == 'y' || rep == 'Y');
		}

		else if (reply == 'o' || reply == 'O')
		{

			do
			{
				system("color F3");
				cout << "The Maximum Value in Octal you can perform operations on it is ( 1 777 777 777 ) \n" << "You Can not perform operations on ((Negative)) Numbers\n\n";
				int r = 0, r2 = 0, r3 = 0, remx = 0, remy = 0, y1 = 0, x2 = 0, y2 = 0, i = 0, j = 0, e = 0, f = 0, Q = 0, U = 0, x1 = 0;
				char O;
				double x = 0, y = 0;

			tryagain3:
				
				x = 0, x2 = 0, Q = 0, remx = 0, e = 0, x1 = 0;
				cout << "Enter an octal Number \n";
				cin >> x;
				x1 = x;
				if (x <= 1777777777)
				{

					while (x1 != 0)
					{

						remx = x1 % 10;
						if (remx == 0 || remx == 1 || remx == 2 || remx == 3 || remx == 4 || remx == 5 || remx == 6 || remx == 7)
						{

							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 8;
							}
							x2 += remx * result;
							x1 = x1 / 10;
							e++;
						}
						else
						{
							Q += 1;
							x1 = x1 / 10;
						}
					}
				}
				else
				{
					Q += 1;
				}

				if (Q > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered 8 or 9 , and the Octal Number System doesn't has (8,9)\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagain3;
				}

				cout << "Enter the sign of opration ((+)) , ((-)) , ((*)) " << "\n";
				cin >> O;

			tryagain4:
				
				y = 0, y2 = 0, U = 0, remy = 0, f = 0;
				cout << "Enter another octal Number \n";
				cin >> y;
				y1 = y;
				if (y <= 1777777777)
				{
					while (y1 != 0)
					{

						remy = y1 % 10;
						if (remy == 0 || remy == 1 || remy == 2 || remy == 3 || remy == 4 || remy == 5 || remy == 6 || remy == 7)
						{
							int result = 1;
							for (int i = 0; i < f; ++i)
							{
								result *= 8;
							}
							y2 += remy * result;
							y1 = y1 / 10;
							f++;
						}
						else
						{
							U += 1;
							y1 = y1 / 10;
						}
					}
				}
				else
				{
					U += 1;
				}
				if (U > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered 8 or 9 , and the Octal Number System doesn't has (8,9)\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagain4;
				}

				if (O == '+')
				{
					system("color 20");
					r = (x2 + y2);

					int  a[11], k;

					for (k = 0; r > 0; k++)
					{
						a[k] = r % 8;
						r = r / 8;
					}
					cout << "The result is = ";
					for (k = k - 1; k >= 0; k--)
					{
						cout << a[k];
					}
					cout << "\n";

				}
				else if (O == '-')
				{
					system("color 20");
					r2 = (x2 - y2);

					int  b[11], c;

					for (c = 0; r2 > 0; c++)
					{
						b[c] = r2 % 8;
						r2 = r2 / 8;
					}
					cout << "The result is = ";
					for (c = c - 1; c >= 0; c--)
					{
						cout << b[c];
					}
					cout << "\n";
				}
				else if (O == '*')
				{
					system("color 20");
					r3 = (x2 * y2);

					int  d[11], e;

					for (e = 0; r3 > 0; e++)
					{
						d[e] = r3 % 8;
						r3 = r3 / 8;
					}
					cout << "The result is = ";
					for (e = e - 1; e >= 0; e--)
					{
						cout << d[e];
					}
					cout << "\n";
				}
				cout << "\n\nTo continue in (Operations on Octal Numbers) enter ((y)) \n";
				cin >> rep;
				system("cls");
			} while (rep == 'y' || rep == 'Y');
		}
		else if (reply == 'b' || reply == 'B')
		{
			
			do
			{
				system("color F4");
				cout << "The Maximum Value you can perform operations on it in Binary is ( 11 1111 1111 )\n" << "You can not perform opreations Negative Numbers\n\n";
				int r = 0, r2 = 0, r3 = 0, remx = 0, remy = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, i = 0, j = 0, s = 0, n = 0, e = 0, w = 0;
				char O;
				double x = 0, y = 0;
			tryagain1:
				s = 0, x = 0, x2 = 0, remx = 0, e = 0;
				cout << "Enter a binary Number \n";
				cin >> x;
				x1 = x;
				if (x <= 1111111111)
				{
					while (x1 != 0)
					{
						remx = x1 % 10;
						if (remx == 0 || remx == 1)
						{
							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 2;
							}
							x2 += remx * result;
							x1 = x1 / 10;
							e++;
						}
						else
						{
							s += 1;
							x1 = x1 / 10;
						}
					}
				}
				else
				{
					s += 1;
				}
				if (s > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered digits between 2 and 9 , and The Binary Number System just has (0,1) digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagain1;
				}

				cout << "Enter the sign of opration ((+)) , ((-)) , ((*)) " << "\n";
				cin >> O;

			tryagain2:
				n = 0, y = 0, y2 = 0, remy = 0, j = 0, w = 0;
				cout << "Enter another binary Number \n";
				cin >> y;
				y1 = y;
				if (y <= 1111111111)
				{
					while (y1 != 0)
					{
						remy = y1 % 10;
						if (remy == 0 || remy == 1)
						{
							int result = 1;
							for (int i = 0; i < w; ++i)
							{
								result *= 2;
							}
							y2 += remy * result;
							y1 = y1 / 10;
							w++;
						}
						else
						{
							n += 1;
							y1 = y1 / 10;
						}
					}
				}
				else
				{
					n += 1;
				}
				if (n > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered digits between 2 and 9 , and The Binary Number System just has (0,1) digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagain2;
				}

				if (O == '+')
				{
					system("color 20");
					r = (x2 + y2);

					int  a[33], k;

					for (k = 0; r > 0; k++)
					{
						a[k] = r % 2;
						r = r / 2;
					}
					cout << "The result is = ";
					for (k = k - 1; k >= 0; k--)
					{
						cout << a[k];
					}
					cout << "\n";

				}
				else if (O == '-')
				{
					system("color 20");
					r2 = (x2 - y2);

					int  b[33], c;

					for (c = 0; r2 > 0; c++)
					{
						b[c] = r2 % 2;
						r2 = r2 / 2;
					}
					cout << "The result is = ";
					for (c = c - 1; c >= 0; c--)
					{
						cout << b[c];
					}
					cout << "\n";
				}
				else if (O == '*')
				{
					system("color 20");
					r3 = (x2 * y2);

					int  d[33], e;

					for (e = 0; r3 > 0; e++)
					{
						d[e] = r3 % 2;
						r3 = r3 / 2;
					}
					cout << "The result is = ";
					for (e = e - 1; e >= 0; e--)
					{
						cout << d[e];
					}
					cout << "\n";
				}
				else
				{
					cout << "((Error!!!!!!!!)) Your entered operation charcter is wrong\n\n";
				}
				cout << "\n\nTo continue in (Operations on Binary Numbers) enter ((y)) \n";
				cin >> rep;
				system("cls");


			} while (rep == 'y' || rep == 'Y');
		}
		else if (reply == 'h' || reply == 'H')
		{
			char replyh;
			do
			{
				system("color F5");
				cout << "The Maximum Value you can prform operations on it in Hexadecimal is ( 7FFF FFFF )\n" << "You can not perform operations on Negative Numbers\n\n";
			tryagainhex1:
				char hex1[9] = { 0 }, P = 0;
				int j = 0, dec = 0, x = 0, x2 = 0, r = 0, r1 = 0, r2 = 0;
				cout << "Enter a hexadecimal Number\n";
				cin >> hex1;
				for (int i = 0; hex1[i] != 0; i++)
				{
					j++;
				}
				if (j <= 8)
				{
					j -= 1;
					for (int k = 0; hex1[k] != 0; k++, j--)
					{
						if (hex1[k] == 'F' || hex1[k] == 'f')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 15 * result;
						}
						else if (hex1[k] == 'E' || hex1[k] == 'e')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 14 * result;
						}
						else if (hex1[k] == 'D' || hex1[k] == 'd')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 13 * result;
						}
						else if (hex1[k] == 'C' || hex1[k] == 'c')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 12 * result;
						}
						else if (hex1[k] == 'B' || hex1[k] == 'b')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 11 * result;
						}
						else if (hex1[k] == 'A' || hex1[k] == 'a')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 10 * result;
						}
						else if (hex1[k] == '9')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 9 * result;
						}
						else if (hex1[k] == '8')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 8 * result;
						}
						else if (hex1[k] == '7')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 7 * result;
						}
						else if (hex1[k] == '6')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 6 * result;
						}
						else if (hex1[k] == '5')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 5 * result;
						}
						else if (hex1[k] == '4')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 4 * result;
						}
						else if (hex1[k] == '3')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 3 * result;
						}
						else if (hex1[k] == '2')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 2 * result;
						}
						else if (hex1[k] == '1')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 1 * result;
						}
						else
						{
							x += 1;
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhex1;
				}
				if (x == 0 && dec > 0)
				{
					x2 = dec;
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhex1;
				}

				cout << "Enter the sign of opration ((+)) , ((-)) , ((*)) " << "\n";
				cin >> P;

			tryagainhex2:
				int u = 0, dec1 = 0, y = 0, y2 = 0;
				char hex2[9] = { 0 };
				cout << "Enter a hexadecimal Number\n";
				cin >> hex2;
				for (int i = 0; hex2[i] != 0; i++)
				{
					u++;
				}
				if (u <= 8)
				{
					u -= 1;
					for (int k = 0; hex2[k] != 0; k++, u--)
					{
						if (hex2[k] == 'F' || hex2[k] == 'f')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 15 * result;
						}
						else if (hex2[k] == 'E' || hex2[k] == 'e')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 14 * result;
						}
						else if (hex2[k] == 'D' || hex2[k] == 'd')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 13 * result;
						}
						else if (hex2[k] == 'C' || hex2[k] == 'c')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 12 * result;
						}
						else if (hex2[k] == 'B' || hex2[k] == 'b')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 11 * result;
						}
						else if (hex2[k] == 'A' || hex2[k] == 'a')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 10 * result;
						}
						else if (hex2[k] == '9')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 9 * result;
						}
						else if (hex2[k] == '8')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 8 * result;
						}
						else if (hex2[k] == '7')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 7 * result;
						}
						else if (hex2[k] == '6')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 6 * result;
						}
						else if (hex2[k] == '5')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 5 * result;
						}
						else if (hex2[k] == '4')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 4 * result;
						}
						else if (hex2[k] == '3')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 3 * result;
						}
						else if (hex2[k] == '2')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 2 * result;
						}
						else if (hex2[k] == '1')
						{
							int result = 1;
							for (int i = 0; i < u; ++i)
							{
								result *= 16;
							}
							dec1 += 1 * result;
						}
						else
						{
							y += 1;
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhex2;
				}
				if (y == 0 && dec1 > 0)
				{
					y2 = dec1;
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhex2;
				}

				if (P == '+')
				{
					system("color 20");
					r = (x2 + y2);
					int a[8], i;

					for (i = 0; r > 0; i++)
					{
						a[i] = r % 16;
						r = r / 16;
					}
					cout << "The equivelant in Hexadecimal= ";
					for (i = i - 1; i >= 0; i--)
					{
						switch (a[i])
						{
						case 10:
							cout << "A";
							break;
						case 11:
							cout << "B";
							break;
						case 12:
							cout << "C";
							break;
						case 13:
							cout << "D";
							break;
						case 14:
							cout << "E";
							break;
						case 15:
							cout << "F";
							break;
						default:
							cout << a[i];
						}
						if (i % 4 == 0)
						{
							cout << " ";
						}
					}

				}
				else if (P == '-')
				{
					system("color 20");
					r1 = (x2 - y2);

					if (r1 < 0)
					{
						system("color 40");
						cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n";
						cout << "you can not calculate negative numbers.\n";
						cout << "\n....................................................Please try again....................................................\n\n";
						goto tryagainhex1;
					}
					int a[8], i;

					for (i = 0; r1 > 0; i++)
					{
						a[i] = r1 % 16;
						r1 = r1 / 16;
					}
					cout << "The equivelant in Hexadecimal = ";
					for (i = i - 1; i >= 0; i--)

					{
						switch (a[i])
						{
						case 10:
							cout << "A";
							break;
						case 11:
							cout << "B";
							break;
						case 12:
							cout << "C";
							break;
						case 13:
							cout << "D";
							break;
						case 14:
							cout << "E";
							break;
						case 15:
							cout << "F";
							break;
						default:
							cout << a[i];
						}
					}
				}
				else if (P == '*')
				{
					system("color 20");
					r2 = (x2 * y2);

					int a[8], i;

					for (i = 0; r2 > 0; i++)
					{
						a[i] = r2 % 16;
						r2 = r2 / 16;
					}
					cout << "The equivelant in Hexadecimal = ";
					for (i = i - 1; i >= 0; i--)

					{
						switch (a[i])
						{
						case 10:
							cout << "A";
							break;
						case 11:
							cout << "B";
							break;
						case 12:
							cout << "C";
							break;
						case 13:
							cout << "D";
							break;
						case 14:
							cout << "E";
							break;
						case 15:
							cout << "F";
							break;
						default:
							cout << a[i];
						}
						if (i % 4 == 0)
						{
							cout << " ";
						}
					}
				}
				else
				{
					cout << "((Error!!!!!!))\n";
				}
				cout << "\n\nTo continue in (Operations on Hexadecimal Numbers) enter ((y)) \n";
				cin >> replyh;
				system("cls");
			} while (replyh == 'y' || replyh == 'Y');
		}
		cout << "\nTo continue use (Standrt calculator) enter ((y)) , if no enter ((n))\n";
		cin >> replys;
		system("cls");
		if (replys == 'y' || replys == 'Y')
		{
			goto standart;
		}
	}

	else if (Ans == 'N' || Ans == 'n')
	{
		char replyone;
		do
		{
			system("color 30");
			char r, t, ta;
			cout << "What is the Number system you want to convert ((from)) it ?\n " << "Decimal enter ((d)) \n" << " Hexadecimal enter ((h)) \n" << " Octal enter ((o)) \n" << " Binary enter ((b)) \n";
			cin >> r;
			cout << "What is the Number system you want to convert ((to)) it ?\n " << "Decimal enter ((d)) \n" << " Hexadecimal enter ((h)) \n" << " Octal enter ((o)) \n" << " Binary enter ((b)) \n";
			cin >> t;
			system("cls");

			if (r == 'o' && t == 'd')
			{
			tryagainod:
				system("color 34");
				cout << "The Maximum Value you can Convert it in Octal is ( 1 777 777 777 )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainod2:
				double num;
				int temp, rem, des = 0, i = 0, z = 0, e = 0, num1 = 0;
				cout << "Enter an octal number : ";
				cin >> num;
				temp = num;

				if (temp <= 1777777777)
				{
					while (temp != 0)
					{
						rem = temp % 10;
						if (rem == 0 || rem == 1 || rem == 2 || rem == 3 || rem == 4 || rem == 5 || rem == 6 || rem == 7)
						{
							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 8;
							}
							des += rem * result;
							temp = temp / 10;
							e++;
						}
						else
						{
							z += 1;
							temp = temp / 10;
						}
					}
				}
				else
				{
					z += 1;
				}
				if (z == 0)
				{
					system("color 20");
					num1 = num;
					cout << "\nDecimal equivalent of " << num1 << " is : " << des;
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered 8 or 9 , and the Octal Number System doesn't has (8,9)\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainod2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");

				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainod;
				}

			}

			else if (r == 'b' && t == 'd')
			{
			tryagainbd:
				system("color 32");
				cout << "The Maximum Value you can Convert it in Binary is ( 11 1111 1111 )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainbd2:
				double num;
				int temp, rem, bin = 0, i = 0, x = 0, e = 0, num1 = 0;
				cout << "Enter an Binary number : ";
				cin >> num;
				temp = num;

				if (temp <= 1111111111)
				{
					while (temp != 0)
					{
						rem = temp % 10;
						if (rem == 0 || rem == 1)
						{
							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 2;
							}
							bin += rem * result;
							temp = temp / 10;
							e++;
						}
						else
						{
							x += 1;
							temp = temp / 10;
						}
					}
				}
				else
				{
					x += 1;
				}
				if (x > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered digits between 2 and 9 , and The Binary Number System just has (0,1) digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainbd2;
				}
				else
				{
					system("color 20");
					num1 = num;
					cout << "\nDecimal equivalent of " << num1 << " is : " << bin;
				}

				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainbd;
				}
			}
			else if (r == 'h' && t == 'd')
			{
			tryagainhd:
			    system("color 37");
			    cout << "The Maximum Value you can Convert it in Hexadecimal is ( 7FFF FFFF )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainhd2:
				int j = 0, dec = 0, x = 0;
				char hex[9];
				cout << "Enter a hexadecimal Number\n";
				cin >> hex;
				for (int i = 0; hex[i] != 0; i++)
				{
					j++;
				}
				if (j <= 8)
				{
					j -= 1;
					for (int k = 0; hex[k] != 0; k++, j--)
					{
						if (hex[k] == 'F' || hex[k] == 'f')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 15 * result;
						}
						else if (hex[k] == 'E' || hex[k] == 'e')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 14 * result;
						}
						else if (hex[k] == 'D' || hex[k] == 'd')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 13 * result;
						}
						else if (hex[k] == 'C' || hex[k] == 'c')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 12 * result;
						}
						else if (hex[k] == 'B' || hex[k] == 'b')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 11 * result;
						}
						else if (hex[k] == 'A' || hex[k] == 'a')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 10 * result;
						}
						else if (hex[k] == '9')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 9 * result;
						}
						else if (hex[k] == '8')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 8 * result;
						}
						else if (hex[k] == '7')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 7 * result;
						}
						else if (hex[k] == '6')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 6 * result;
						}
						else if (hex[k] == '5')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 5 * result;
						}
						else if (hex[k] == '4')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 4 * result;
						}
						else if (hex[k] == '3')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 3 * result;
						}
						else if (hex[k] == '2')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 2 * result;
						}
						else if (hex[k] == '1')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 1 * result;
						}
						else
						{
							x += 1;
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhd2;
				}
				if (x == 0 && dec > 0)
				{
					system("color 20");
					cout << "The result = " << dec << "\n";
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhd2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainhd;
				}

			}
			else if (r == 'd' && t == 'o')
			{
		    tryagaindo:
			system("color 60");
				cout << "The Maximum Value you can Convert it in Decimal is ( 2,147,483,647 )\n" << "You can not Convert ((Negative)) Numbers\n\n";
			tryagaindo2:
				int a[11], i, n1 = 0;
				double n;
				cout << "Enter decimal number\n";
				cin >> n;

				if (n >= 0 && n < 2147483647)
				{
					system("color 20");
					n1 = n;
					for (i = 0; n1 > 0; i++)
					{
						a[i] = n1 % 8;
						n1 = n1 / 8;
					}
					cout << "The equivelant in Octal = ";
					for (i = i - 1; i >= 0; i--)
					{
						cout << a[i];
						if (i % 3 == 0)
						{
							cout << " ";
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagaindo2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagaindo;
				}
			}
			else if (r == 'd' && t == 'b')
			{
			tryagaindb:
			    system("color 61");
			    cout << "The Maximum Value you can Convert it in Decimal is ( 2,147,483,647 )\n" << "You can not Convert ((Negative)) Numbers\n\n";
			tryagaindb2:
				int a[33], i, n1 = 0;
				double n;
				cout << "Enter decimal number\n";
				cin >> n;
				if (n >= 0 && n < 2147483647)
				{
					system("color 20");
					n1 = n;
					for (i = 0; n1 > 0; i++)
					{
						a[i] = n1 % 2;
						n1 = n1 / 2;
					}
					cout << "The equivelant in Binary = ";
					for (i = i - 1; i >= 0; i--)
					{
						cout << a[i];
						if (i % 4 == 0)
						{
							cout << " ";
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagaindb2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagaindb;
				}

			}
			else if (r == 'd' && t == 'h')
			{
		    tryagaindh:
			system("color 62");
				cout << "The Maximum Value you can Convert it in Decimal is ( 2,147,483,647 )\n" << "You can not Convert ((Negative)) Numbers\n\n";
			tryagaindh2:
				int a[8], i, n1 = 0;
				double n;
				cout << "Enter decimal number\n";
				cin >> n;
				if (n >= 0 && n < 2147483647)
				{
					system("color 20");
					n1 = n;
					for (i = 0; n1 > 0; i++)
					{
						a[i] = n1 % 16;
						n1 = n1 / 16;
					}
					cout << "The equivelant in Hexadecimal= ";
					for (i = i - 1; i >= 0; i--)
					{
						switch (a[i])
						{
						case 10:
							cout << "A";
							break;
						case 11:
							cout << "B";
							break;
						case 12:
							cout << "C";
							break;
						case 13:
							cout << "D";
							break;
						case 14:
							cout << "E";
							break;
						case 15:
							cout << "F";
							break;
						default:
							cout << a[i];
						}
						if (i % 4 == 0)
						{
							cout << " ";
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagaindh2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagaindh;
				}
			}
			else if (r == 'b' && t == 'o')
			{
		    tryagainbo:
			system("color E0");
				cout << "The Maximum Value you can Convert it in Binary is ( 11 1111 1111 )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainbo2:
				double num;
				int temp, rem, bin = 0, i = 0, x = 0, e = 0;
				cout << "Enter an Binary number : ";
				cin >> num;
				temp = num;
				if (temp <= 1111111111)
				{
					while (temp != 0)
					{
						rem = temp % 10;
						if (rem == 0 || rem == 1)
						{
							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 2;
							}
							bin += rem * result;
							temp = temp / 10;
							e++;
						}
						else
						{

							x += 1;
							temp = temp / 10;

						}
					}
				}
				else
				{
					x += 1;
				}
				if (x > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered digits between 2 and 9 , and The Binary Number System just has (0,1) digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainbo2;
				}
				else
				{
					system("color 20");
					int a[11], i;

					for (i = 0; bin > 0; i++)
					{
						a[i] = bin % 8;
						bin = bin / 8;
					}
					cout << "The equivelant in Octal = ";
					for (i = i - 1; i >= 0; i--)
					{
						cout << a[i];
					}
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainbo;
				}

			}
			else if (r == 'b' && t == 'h')
			{
		    tryagainbh:
			system("color E1");
				cout << "The Maximum Value you can Convert it in Binary is ( 11 1111 1111 )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainbh2:
				double num;
				int temp, rem, bin = 0, i = 0, x = 0, e = 0;
				cout << "Enter an Binary number : ";
				cin >> num;
				temp = num;
				if (temp <= 1111111111)
				{
					while (temp != 0)
					{
						rem = temp % 10;
						if (rem == 0 || rem == 1)
						{
							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 2;
							}
							bin += rem * result;
							temp = temp / 10;
							e++;
						}
						else
						{

							x += 1;
							temp = temp / 10;

						}
					}
				}
				else
				{
					x += 1;
				}
				if (x > 0)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered digits between 2 and 9 , and The Binary Number System just has (0,1) digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainbh2;
				}
				else
				{
					system("color 20");
					int a[8], i;
					for (i = 0; bin > 0; i++)
					{
						a[i] = bin % 16;
						bin = bin / 16;
					}
					cout << "The equivelant in Hexadecimal = ";
					for (i = i - 1; i >= 0; i--)

					{
						switch (a[i])
						{
						case 10:
							cout << "A";
							break;
						case 11:
							cout << "B";
							break;
						case 12:
							cout << "C";
							break;
						case 13:
							cout << "D";
							break;
						case 14:
							cout << "E";
							break;
						case 15:
							cout << "F";
							break;
						default:
							cout << a[i];
						}
					}
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainbh;
				}
			}
			else if (r == 'o' && t == 'b')
			{
		    tryagainob:
			system("color D0");
				cout << "The Maximum of digits is ((50 digits))\n" << "You can not convert Negative Numbers\n";
			tryagainob2:
				char oct[50];
				int v = 0, h = 0;
				cout << "\nEnter an octal Number\n";
				cin >> oct;
				cout << "\n";
				cout << "The rsuult is : ";
				for (int k = 0; oct[k] != 0; k++)
				{
					h++;
				}
				if (h <= 50)
				{
					system("color 20");
					for (int i = 0; oct[i] != 0; i++)
					{
						switch (oct[i])
						{
						case '0':
						{
							cout << "000 ";
						}
						break;
						case '1':
						{
							cout << "001 ";
						}
						break;
						case '2':
						{
							cout << "010 ";
						}
						break;
						case '3':
						{
							cout << "011 ";
						}
						break;
						case '4':
						{
							cout << "100 ";
						}
						break;
						case '5':
						{
							cout << "101 ";
						}
						break;
						case '6':
						{
							cout << "110 ";
						}
						break;
						case '7':
						{
							cout << "111 ";
						}
						break;
						default:
						{
							v += 1;
						}
						}
					}
				}
				else if (v > 0 || h > 50)
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainob2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainob;
				}
			}
			else if (r == 'o' && t == 'h')
			{
		    tryagainoh:
			system("color D4");
				cout << "The Maximum Value you can Convert it in Octal is ( 1 777 777 777 )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainoh2:
				double num;
				int temp, rem, des = 0, i = 0, z = 0, e = 0, num1 = 0;
				cout << "Enter an octal number : ";
				cin >> num;
				temp = num;

				if (temp <= 1777777777)
				{
					while (temp != 0)
					{
						rem = temp % 10;
						if (rem == 0 || rem == 1 || rem == 2 || rem == 3 || rem == 4 || rem == 5 || rem == 6 || rem == 7)
						{
							int result = 1;
							for (int i = 0; i < e; ++i)
							{
								result *= 8;
							}
							des += rem * result;
							temp = temp / 10;
							e++;
						}
						else
						{
							z += 1;
							temp = temp / 10;
						}
					}
				}
				else
				{
					z += 1;
				}
				if (z == 0)
				{
					system("color 20");
					num1 = num;
					int a[8], i;
					for (i = 0; des > 0; i++)
					{
						a[i] = des % 16;
						des = des / 16;
					}
					cout << "The equivelant in Hexadecimal= ";
					for (i = i - 1; i >= 0; i--)
					{
						switch (a[i])
						{
						case 10:
							cout << "A";
							break;
						case 11:
							cout << "B";
							break;
						case 12:
							cout << "C";
							break;
						case 13:
							cout << "D";
							break;
						case 14:
							cout << "E";
							break;
						case 15:
							cout << "F";
							break;
						default:
							cout << a[i];
						}
						if (i % 4 == 0)
						{
							cout << " ";
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered 8 or 9 , and the Octal Number System doesn't has (8,9)\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainoh2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");

				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainoh;
				}
			}

			else if (r == 'h' && t == 'b')
			{
		    tryagainhb:
			system("color B0");
				cout << "The Maximum of digits is ((50 digits))\n" << "You can not convert Negative Numbers\n";
			tryagainhb2:
				char hex[50];
				int v = 0, h = 0;
				cout << "\nEnter a hexadecimal Number\n";
				cin >> hex;
				cout << "\n";
				cout << "The rsuult is : ";

				for (int k = 0; hex[k] != 0; k++)
				{
					h++;
				}
				if (h <= 50)
				{
					system("color 20");
					for (int i = 0; hex[i] != 0; i++)
					{
						switch (hex[i])
						{
						case '0':
						{
							cout << "0000 ";
						}
						break;
						case '1':
						{
							cout << "0001 ";
						}
						break;
						case '2':
						{
							cout << "0010 ";
						}
						break;
						case '3':
						{
							cout << "0011 ";
						}
						break;
						case '4':
						{
							cout << "0100 ";
						}
						break;
						case '5':
						{
							cout << "0101 ";
						}
						break;
						case '6':
						{
							cout << "0110 ";
						}
						break;
						case '7':
						{
							cout << "0111 ";
						}
						break;
						case '8':
						{
							cout << "1000 ";
						}
						break;
						case '9':
						{
							cout << "1001 ";
						}
						break;
						case 'A':
						case 'a':
						{
							cout << "1010 ";
						}
						break;
						case 'B':
						case 'b':
						{
							cout << "1011 ";
						}
						break;
						case 'c':
						case 'C':
						{
							cout << "1100 ";
						}
						break;
						case 'd':
						case 'D':
						{
							cout << "1101 ";
						}
						break;
						case 'e':
						case 'E':
						{
							cout << "1110 ";
						}
						break;
						case 'f':
						case 'F':
						{
							cout << "1111 ";
						}
						break;
						default:
						{
							v += 1;
						}
						}
					}
				}
				else if (v > 0 || h > 50)
				{
				system("color 40");
				    cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainhb2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainhb;
				}
			}

			else if (r == 'h' && t == 'o')
			{
		    tryagainho:
		         system("color B4");
				cout << "The Maximum Value you can Convert it in Hexadecimal is ( 7FFF FFFF )\n" << "You can not Convert Negative Numbers\n\n";
			tryagainho2:
				int j = 0, dec = 0, x = 0;
				char hex[9];
				cout << "Enter a hexadecimal Number\n";
				cin >> hex;
				for (int i = 0; hex[i] != 0; i++)
				{
					j++;
				}
				if (j <= 8)
				{
			
					j -= 1;
					for (int k = 0; hex[k] != 0; k++, j--)
					{
						if (hex[k] == 'F' || hex[k] == 'f')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 15 * result;
						}
						else if (hex[k] == 'E' || hex[k] == 'e')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 14 * result;
						}
						else if (hex[k] == 'D' || hex[k] == 'd')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 13 * result;
						}
						else if (hex[k] == 'C' || hex[k] == 'c')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 12 * result;
						}
						else if (hex[k] == 'B' || hex[k] == 'b')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 11 * result;
						}
						else if (hex[k] == 'A' || hex[k] == 'a')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 10 * result;
						}
						else if (hex[k] == '9')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 9 * result;
						}
						else if (hex[k] == '8')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 8 * result;
						}
						else if (hex[k] == '7')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 7 * result;
						}
						else if (hex[k] == '6')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 6 * result;
						}
						else if (hex[k] == '5')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 5 * result;
						}
						else if (hex[k] == '4')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 4 * result;
						}
						else if (hex[k] == '3')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 3 * result;
						}
						else if (hex[k] == '2')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 2 * result;
						}
						else if (hex[k] == '1')
						{
							int result = 1;
							for (int i = 0; i < j; ++i)
							{
								result *= 16;
							}
							dec += 1 * result;
						}
						else
						{
							x += 1;
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainho2;
				}
				if (x == 0 && dec > 0)
				{
					system("color 20");
					int a[11], i;

					for (i = 0; dec > 0; i++)
					{
						a[i] = dec % 8;
						dec = dec / 8;
					}
					cout << "The equivelant in Octal = ";
					for (i = i - 1; i >= 0; i--)
					{
						cout << a[i];
						if (i % 3 == 0)
						{
							cout << " ";
						}
					}
				}
				else
				{
					system("color 40");
					cout << "\n\t\t\t\t\t\t((Error!!!!!!!))\n" << "\n You entered Wrong digits\n" << "OR\n" << " You entered a Number more than the Maximum value\n";
					cout << "OR\n" << " You entered a Negative Number\n";
					cout << "\n....................................................Please try again....................................................\n\n";
					goto tryagainho2;
				}
				cout << "\n\nTo Continue in this Conversion Operation enter ((y)) , if No enter ((n))\n";
				cin >> ta;
				system("cls");
				if (ta == 'y' || ta == 'Y')
				{
					goto tryagainho;
				}

			}
			else
			{
				cout << "Error !!!!!!";
			}
			cout << "To Continue in (Number Systems Conversions) enter ((y)) , if No enter ((n))\n";
			cin >> replyone;
			system("cls");
		}
		while (replyone == 'y' || replyone == 'Y');
	}
	else
	{
	system("color 40");
	cout << "\t\t\t\t\t\t((Erorr!!!!!!!!))\n\n";
	}
	cout << "To continue use the Calculator App enter ((y)) , if no enter ((n))\n";
	cin >> replyc;
	system("cls");

	if (replyc == 'y' || replyc == 'Y')
	{
		goto calculator;
	}
	else
	{
		system("color 17");
		cout << "\t\t\t\t\tThank you for using our calculator\n\n";
		cout << "\t\t\t\t\t\tProject Implementers\n";
		cout << "1 - Marwan Yasser Abdelaziz Mahmoud\n";
		cout << "2 - Mohammed Ahmed Abd Eslam Gomaa\n";
		cout << "3 - Ahmed Bassem Eshemy\n";
		cout << "4 - Mohammed Ali Saad\n";
	}
	
	return 0;
}