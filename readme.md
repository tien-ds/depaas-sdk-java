# Signature library

## 1. how to use in java
#### 1. Download prebuild library
**Download files according to your system** [Pre-compiled library](https://github.com/tien-ds/depaas-sdk.git) 
> You must ensure that the library is in your system path
> 
> `windows` eg. `$(JAVA_HOME)/bin)`
> 
> `linux` eg. `/usr/lib` or `usr/lib64` 

#### 2. Clone Java Files
```shell
git clone https://github.com/tien-ds/depaas-sdk-java
```
> Do not modify the package name
#### 3. Write code
```java
public class Test {
    static {
        System.loadLibrary("share_signer_main");
    }

    public static void main(String[] args) {
        Signer.initClient();
        //Generate address 
        System.out.println(Signer.genKey());
        
        //Transfer token
        String hex = Signer.transfer("{ \"contractAddr\": \"0xdb834d1f5baf312424fe3003524e2f5a52bf15b2\",\"to\":\"0xdb834d1f5baf312424fe3003524e2f5a52bf15b2\", \"base64PrivateKey\": \"h83oyA0Rc1GeAnzHnrdXBV8G1OKbreGjfMLG50XXtkLDPyWwc6/4jipJ4QTD0M2ZuVrjumMNR+sZJuxAGaVxig==\",\"amount\": 10000 }");    
        System.out.println(hex);
           
    }
}
```