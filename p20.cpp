var i,j,k;
for(i=0;i<5-i;i++){
    for(k=0;k<=i;k++){
        document.write("&nbsp")
    }
    for(j=0;j<=i;j+2){
        document.write("@")
    }
    document.write("<br>")
}
