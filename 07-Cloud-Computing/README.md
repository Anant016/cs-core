# Cloud-Computing-Crash-Course (AWS)

<details close>
  <summary><h3> 01-Basics </h3> </summary>

### Advantages
1. Cost Efficient (Pay for what you use)
2. Agile & Speed
3. Ability to scale up and down 
4. Stop guessing capacity
5. Go Global in minutes
6. Every service offers API

### Types of Cloud Deployment Models
1. Private (More Secure)
2. Public (Elastic Scaling)
3. Hybrid (Seamless)

### Types of Cloud
1. SaaS (Software) - Web Browser - Salesforce
2. IaaS (Infrasturcture as a Service) - Data Centers - AWS
3. PaaS (Platform) - Deployment - Heroku
4. Function as a Service
(AWS is all 3 of them)

## AWS Compute
- EC2 - virtual servers
- lambda - serverless
- Elastic beantalk
- ECS, EKS, Fargate - docker oon EC2 
_____________________________________________________________________________
### 1. EC2 (Ias)
- Elastic Compute Cloud
- Virtual Machine
- Diff options(OS, disk management, hardware configuartion, processor, memory RAM, hard disk, Graphics etc..)
-  Instance sizing(RAM), Instance Types(Processor), OS

### Terminology/Services
- **AMI(Amazon Machine Images)** - snapshot of virtual machine configuration 
- **Instances** are created which can be started or stopped 
- **(VPC) Virtual Private Cloud**
- **Elastic Block Store (EBS)** provides persistent block level *storage volumes* for use with Amazon EC2 instances 
- **S3 Bucket** 
- Security Groups - port number, firewall,
Web - 0.0.0.0/0 (all), App - Web, DB - App

> connection to a linux machine should be done through SSH (Secure Shell) (port 22)<br/>
> If you are on MAc, linux directly use, once instance is created<br/>
On windows you need SSH Client - putty<br/>
> convert *pem* Key to *ppk* using *putty gen*<br/>
> putty - host ip <br/>
> SSH> Auth<br/>
> User - linux - ec2-user, windows-administrator, ubuntu<br/>
> Run Linux commands - ls, pwd, <br/>
> Installing Apache server -`sudo yum install httpd`<br/>
> `sudo service httpd start`<br/>
> `sudo service httpd status`<br/>
> open public IP<br/>
> cd var/www/html<br/>
> sudo vim index.html<br/>
> esc :w :q<br/>

______________________________________________________________________

Let say 1 Ec2 instance is not enough for your work load
### Auto Scaling
- no additional charge
- Launch config(new server config), Auto Scaling Group(min, max, desired capacity), Scaling Plan
__________________________________________________________________

### 2. Elastic BeanStalk (PaS)
- deployment application (node,php,python, etc...)
- uploading zip (create ec2,loadbalancer, etc... automatically)

____________________________________________________________________

### 3. Lambda (FaS)
- Run code without provisoning or managing server
- event driven functions (at particular time,etc...)
- websites, Alexa ,etc...
- can call other services 
- lambda_handler- starts here(like main)

____________________________________________________________________
</details>


<details close>
  <summary><h3> 02-Networking in AWS </h3> </summary>
  
  VPC> Subnets > public & private > Internet Gateway> Attach VPC
  > Route Table> Add Internet Gateway(10.0.0.0/0)
  > NAT gateway
  
  DNS > Load Balancer > Route 53
  
</details>


<details close>
  <summary><h3> 03-Database AWS </h3> </summary>
  
  Block vs File vs Object Storage
  <br/>
  *1. Block Storage* - Raw Storage - ex hard disk (files)
  <br/>
  *2. File Storage* - NAS(Network Attached Storage)
  <br/>
  *3. Object Storage* - API Access to Data - ex. Ceph, Openstack Swift

Access s3 data through API(Https)
host static website on s3
  
EBS- SSD, HDD(disk drive)
S3 -(online storage)
</details>


<details close>
  <summary><h3> 04 </h3> </summary>
  
Amazon Cloud Watch - Monitoring Service(metrics, alarms, events) + Filter
</details>
