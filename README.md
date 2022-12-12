# cs225project

## Linkage and location of all major code, data, results, and delivarable files

Our code for the Iterative deepening depth-first search can be found in the iterativedfs.cpp and iterativedfs.hpp files in the src folder. The code for our BFS algorithm can be found in the bfs.cpp and bfs.hpp files in src folder. The code for our Dijkstras algorithm can be found in the dijkstra.cpp and dijkstra.hpp files in the src folder. The results of this code can be found by running make && ./test in the terminal and running the test suite we have created. 

## Commands to run the assignment

The commands to run this assignment is ./main which will then follow up with a few prompts (what is the filepath? pick a traversal/algorithm, 

## Description of test suite

## Leading Question 

Our dataset is a subreddit-to-subreddit hyperlink network where each row corresponds to a source subreddit, which has metadata such as a target_subreddit, post_id, readability index, and more. The source subreddit represents a vertex, and the target subreddit, which is a subreddit that is linked on the source subreddit’s page, is a vertex connected to the source. From this dataset, we hope to explore the following questions: “How can you get from one subreddit to another with the least amount of human effort, defined by the average readability of the source and target post? Given a starting subreddit, which subreddits are a certain depth away?”. To help answer the first question, we plan to use Dijkstra’s Algorithm and for the second question, we plan to use Iterative deepening depth-first search. Each reddit post has a readability index as part of the metadata, and we plan to take the average of the source post’s readability and the target post’s readability for the edge weight from the source to target post. Readability index estimates how difficult it is to read text, and through our project, we want to find an efficient way to navigate between subreddits with the highest readability (easier to read).

## Dataset Acquisition

## Data Format

The source of the dataset is Stanford’s SNAP library and is called Social Network: Reddit Hyperlink Network. The input format is a tsv file and there are close to 600 thousand rows of data, in which each row has the source subreddit, the target subreddit, post id, timestamp, link sentiment, and extra properties. We plan to use the entire dataset, although we do not require use of all the metadata of each node. We will mainly be using the source subreddit, target subreddit, and readability index in our algorithms.

## Data Correction

To account for data correction, after parsing the input data, we will use Pandas. We will be using Pandas to convert the data to a dataframe and use the dropna( ) function to get rid of NaN rows, and then download the dataset in a format we plan to use in VSCode. In addition, we will take out posts that are missing data that we plan to use such as readability index. If a readability index is also given as a negative value, we will filter out this data entry. In addition, when we start to create our graph, we plan to only keep data that we plan to use such as source subreddit, target subreddit, and readability index. 


## Data Storage

The data structures we are planning to use to store data within our code are vectors and maps. We will use an unordered map to store an adjacency list. We plan to map each source post id to a map where the key is the adjacent post and the value is the edge weight. To represent each node in our graph, we plan to create a Node class to store data about each vertex such as post id and reliability index. We can also make an Edge class to store data about each edge such as the edge weight, the source, and the destination post. The total storage cost for our dataset will be O(n) because we are storing n node items in the map (and this is the cost for each map we make). The cost of searching, inserting, and deleting from the map is O(1).


## Algorithm 

Function Inputs: The algorithms we are using are Dijkstra’s algorithm and Iterative deepening DFS. The expected inputs for our algorithm are the source sub_reddit, target_subreddit, post_id, and the automated readability index for each post. For Dijkstra’s and Iterative deepening DFS, we would need to create a graph from the stored data such that each reddit post has an edge to all of its links. When we build the graph, we will use the average readability scores of our source and target post as our edge weights, and we plan to store these values as we build the graph. None of these algorithms require heuristics.
Function Outputs: The expected outputs of our algorithms are the ids of the order of posts that will result in the shortest path (smallest cumulative readability index) from the specified start and end points as well as whether or not a post is within a specified depth of the starting point. For Dijkstra’s, the shortest path will be stored in a vector or list and we will print onto the screen whether or not you can reach a post within a certain number of posts. We can also print out the names of the subreddit to see if any topics are linked to each other. For the iterative DFS algorithm, we plan to take in user input for a certain depth “d” we want to search as well as a starting subreddit, and print out subreddits that are “d” edges away from the specified start node. 

Function Efficiency: The two graph algorithms we plan on using are Djikstra’s Shortest Path Algorithm (O(nlog(n)+mlog(n)) (m is the number of edges and n is the number of nodes) and Iterative Deepening DFS (O(b^k)). We plan on using a BFS algorithm (O(m+n)) to traverse through the graph and assist with our Dijktra’s Algorithm in finding the shortest path between two subreddits. Our definition of “shortest path” is how do we get from subreddit A to subreddit B with the least human effort i.e. least readability problems. The Iterative Deepening DFS will allow us to define a radius and search to see if our desired subreddit falls inside that radius. If it does, then we can find the shortest path; else, don’t bother as it is outside our radius and requires “too much effort.” For this to work, we will first input the graph into our Iterative Deepening DFS algorithm since all we need to do is traverse it and see if we encounter the desired subreddit after following an arbitrary amount of links. Using this information, we can execute Dijkstra’s Algorithm and output a vector holding the subreddits it used to go from subreddit A to B. The runtime for Iterative Deepening DFS would be O(b^k) since the graph would have a branching factor b and it would have to go down a height, or distance, of k. The runtime for Dijkstra's Algorithm would be dependent on the min heap/priority queue, where traversing through the heap would take logm and it would do O(m) and O(n) work at each level.


## Timeline

11/11/22: Parse data

11/18/22: Make graph/adjacency matrix and split up tasks for the project

11/25/22: Finish BFS traversal, start both graph algorithms

12/2/22: Finish graph algorithms + start presentation and report

12/7/22: Finish final presentation and written report



# Team Contract

## Communication
1. **Team Meetings** 
We plan to meet once a week on Saturday afternoons. Each meeting will last 1 to 2 hours. We will try our best to meet in person, but if this is not possible, we will create a Zoom meeting. During these meetings, we hope to delegate tasks to split up the project efficiently and share weekly updates. In addition, we will have a Trello board where we will take notes on completed, pending, and new tasks.

2. **Assistance** 
We will be communicating through text, in-person meetings, as well as virtual meetings as needed. Team members should be expected to respond within 5 hours during the day. We will also help each other out during our weekly meeting. We will also have time during the week when we will work on our individual tasks together, like a dev night to help us work together and accomplish our goals.

3. **Respect** 
We will ensure that every member has an opportunity to speak and actively listen and engage by having an open conversation and allotted time during meetings where we can bring up concerns and questions we have. This time during each meeting will be important to ensure that all group members have the time to express their thoughts. We will also ensure to create a collaborative environment where everyone feels like they belong and can voice their concerns.  

## Collaboration

4. **Work Distribution** 
We will work in an agile software development environment in which we will create a Trello board to assign tasks to each team member. This way, everyone on the team will know both the tasks that they are responsible for as well as the tasks that the other team members are responsible for. An added benefit to using a Trello board is that others can be added to the same task in cases where a task is too much for one person to handle. This way, our members will know who’s working with them on certain tasks. To address unexpected complications or unforeseen work, team members should reach out to the team if they are stuck on an issue.

5. **Time Commitment** 
The weekly hourly commitment for each group member will be around 2-3 hours. Prior time commitments should be discussed ahead of time so team meetings and work sessions can be planned around that. When new conflicts or commitments inevitably occur, it is important that we communicate such things right away with each other. That way, we will ensure that conflicts resolved as soon as they arise.

6. **Conflict Resolution** 
To address situations in which there is a disagreement within members of the team, all team members will collectively discuss the issue together and hopefully resolve the issue. If we are unable to come to an agreement, we will reach out to our mentor for their opinion/advice. Situations in which one or more members have not accomplished their tasks will be handles by discussing why the tasks were not completed. As a team, we will decide the best course of action to help the team members complete their tasks. 

## Signatures

Shreya Vinjamuri: shreyav5

Aashi Agrawal: aashia2

Nikhila Puppala: puppala4

Siddharth Gupta: sg56
