#include<stdio.h>

int main(){
	
	int i, j, n, choice, currentIndex = 0, numbers[100], array = 0;
	int sumEven, sumOdd, max, valueInsert, indexDelete, elementInsert, arranged = 0, searchValue, left, mid, right;
	
	do{
		printf("\n*****************************Menu*****************************\n");
		printf("1. Nhap so luong phan tu va gia tri tung phan tu cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n");
		printf("3. Tinh tong cac phan tu chan va tong cac phan tu le trong mang\n");
		printf("4. In ra gia tri lon nhat cua cac phan tu trong mang\n");
		printf("5. Them moi mot phan tu vao cuoi mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Kiem tra su ton tai cua phan tu trong mang\n");
		printf("9. In ra cac phan tu xuat hien dung 2 lan trong mang\n");
		printf("10. In ra so lan xuat hien cua 1 phan tu\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu: ");
				scanf("%d", &n);
				
				for(i = 0; i < n; i++){
					printf("[%d] = ", currentIndex);
					scanf("%d", &numbers[currentIndex]);
					currentIndex++;
				}
				array = 1;
				
				printf("\n");
				break;
			case 2:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    printf("Cac phan tu trong mang: ");
				
				    for(i = 0; i < currentIndex; i++){
					    printf("%d ", numbers[i]);
				    }
		 	    }
				printf("\n");
				break;
			case 3:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    sumEven = 0, sumOdd = 0;
				    for(i = 0; i < currentIndex; i++){
					    if(numbers[i] % 2 ==0){
						    sumEven += numbers[i];
					    } else{
						    sumOdd += numbers[i];
					    }
				    }
				    printf("Tong cac gia tri chan = %d\n", sumEven);
				    printf("Tong cac gia tri le = %d\n", sumOdd);
			    }
				printf("\n");
				break;
			case 4:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    max = numbers[0];
				    for(i = 0; i < currentIndex; i++){
					    if(numbers[i] > max){
						    max = numbers[i];
					    }
				    }
				    printf("Gia tri lon nhat la: %d", max);
			    }
			    
				printf("\n");
				break;
			case 5:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    printf("Nhap phan tu moi: ");
				    scanf("%d", &valueInsert);
				
				    numbers[currentIndex] = valueInsert;
				    currentIndex++;
			    }
			    
				printf("\n");
				break;
			case 6:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    printf("Nhap vi tri can xoa(0 - %d): ", currentIndex - 1);
				    scanf("%d", &indexDelete);
				
				    if(indexDelete < 0 || indexDelete >= currentIndex){
					    printf("Vi tri khong hop le");
				    } else{
					    for(i = indexDelete; i < currentIndex - 1; i++){
						    numbers[i] = numbers[i + 1];
				        }
				        currentIndex--;
				    }
			    }
				
				printf("\n");
				break;
			case 7:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    for(i = 0; i < currentIndex; i++){
					    elementInsert = numbers[i];
					    j = i - 1;
					    while(numbers[j] > elementInsert && j >= 0){
						    numbers[j + 1] = numbers[j];
						    j--;
					    }
					    numbers[j + 1] = elementInsert;
				    }
				    arranged = 1;
			    }
			
				printf("\n");
				break;
			case 8:
				if(array == 0){
					printf("Mang chua co gia tri nao");
				} else{
				    if(arranged){
					    printf("Nhap so can tim: ");
					    scanf("%d", &searchValue);
					
					    left = 0, right = currentIndex - 1;
					    do{
						    mid = left + (right - left) / 2;
						    for(i = 0; i < currentIndex; i++){
							    if(numbers[mid] < searchValue){
								    left = mid + 1;
							    }
							    if(numbers[mid] > searchValue){
								    right = mid - 1;
							    }
						    }
					    } while(numbers[mid] != searchValue && left <= right);
					
				        if(numbers[mid] == searchValue){
					        printf("Tim thay %d tai vi tri [%d]", searchValue, mid);
				        } else{
				    	    printf("Khong tim thay gia tri");
					    }
					
				    } else{
					    printf("Phai sap xep mang truoc");
				    }
			    }
			    
				printf("\n");
				break;
			case 9:
				printf("\n");
				break;
			case 10:
				printf("\n");
				break;
				
			default:
				printf("Vui long chon tu 0-10\n");
		}
		
	} while(1);
	
	return 0;
}
