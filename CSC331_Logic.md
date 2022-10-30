#NU  
#notes  
#csc331  
#NUComputerScience  
#Programming #code #logic #graph
# CSC331 - Discrete Structures and Logic  
## Professor: Haifei Tanner  
### haifei.tanner@natuniv.edu  


[CSC331](file:///C:/Documents/Documents/Important/School/National%20University/CSC331%20-%20Discrete%20Structures%20and%20Logix/CSC331.md)

# CSC331_Logic Notes

conjunction: ^

disjunction: v

negation: -]

conditional: "if p then q" -->

-uses hypothesis and conclusion
-only way to be false is if hypothesis is true and condition is false
-**if p is false and q is false, p->q true**

converse: converse of p->q is q->p

contrapositive: contrapositive of p->q is -]q->-]p

inverse: inverse of p->q is -]p->-]q

biconditional operation: denoted <--> meaning "p if and only if q"

----------------
Operations:

-^, v, -] applied before --> or <-->

#operations
--------------------------------
### Logical Equivalence
--------------------------------
tautology: if proposition is always true, regardless of propositions' truth value

contradiction: if roposition is always false, regardless of truth value

De Morgan's laws: distributed inside parentheses, disjunction changes to conjunction

De Morgan's laws: -]Ax -]P(x) = Ex -]-]P(x)


--------------------------------
### Nested Quantifiers
--------------------------------
-Logical expressions are propositions when all variables are bound

--------------------------------
### Logical Reasoning
--------------------------------
-argument is a sequence of propositions called hypothesis followed by final proposition
called conclusion

-1.11.2 - use truth table to establish calidity of an argument


----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 2 and Introduction to Proofs
----------------------------------------------------------------
----------------------------------------------------------------
Theorem: a statement that can be proven to be true

Proof: consists of a series of steps, each of which follows logically from assumptions
	whose final step should result in the statement or the theorem

Axiom: statements assumed to be true

-universal generalization

Existence proof:

constructive proof of existence: 

--------------------------------
### Proofs
--------------------------------

--------------------------------
### Proof by contrapositive
--------------------------------
proof by contradiction vs. proof by contrapositive

----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 3 Sets and subsets
----------------------------------------------------------------
----------------------------------------------------------------
set: a collection of objects

elements: elements are objects in a set

roster notation: A = { 2, 4, 6, 10}

-the order in which the elements are listed is unimportant
-repeating an element does not change the set

empty set: set with no elements

null set: also an empty set with 'null' as reference
	-can be denoted {}

infinte set: set that is either empty or numbers 1 through n, for positive integer n

-a set that is not finite

cardinality: of a finite set A, denoted |A|, is the number of distinct elements in set A

-Power sets

-Intersection

-Union

-Difference of sets: A-B

Symmetric difference: where in A and B, the set of elements that are a member one A and B
	but not both

-Alternate definition is (A - B) u (B - A)

-Denoted a ((target)) symbol: (+)

-Complement set denoted  A(bar)

Cartesian products: ordered pairs

Disjoint: sets are disjoint if intersection is empty

pairwise disjoing: if every pair of distinct sets in the sequence is disjoint

partition: a collection of non-empty subsets of A, where each element has one subset

----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 4 Definition of functions
----------------------------------------------------------------
----------------------------------------------------------------
**4.1)**
function: maps elements of set X to elements of set Y is a subset of X x Y such that for every
	x E X, there is exactly one y E Y for which (x,y) E f.

domain: set X in X --> Y is called domain

target: set Y is the target of f; also called co-domain

arrow diagram: domain on left, target on right

function on set of strings

equal: if f and g have the same domain and target and f(x) = g(x) for every element x in the
	domain

**4.2)**
floor function: largest integer y such that y <= x

ceiling function: smallest integer y such that x <= y

**4.3) Properties of functions**

one-to-one, injective: f maps different elements in X to different elements in Y

onto, surjective: range of f is equal to the target Y

bijective: if function is one-to-one and onto

-bijective functions are called bijection

-bijection are called a one-to-one correspondence

-domain and target are finite sets

**4.4) Inverse of a function**

if function X --> Y is bijection, then the inverse of f is obtained by exchanging the first
	and second entries in each pair in f.

**4.6) Logarithms and exponents**

exponential function: is one-to-one and onto, therefore, has an inverse

-base of the exponent, exponent

"Properties of exponents"

logarithm function: inverse of exponential function

--> real number b > 0 and b != 1, lob_b:R+ -> R

x^x = y <-> log_bY=x

base of the logarithm is "b"

-strictly increasing: x_1 < x_2, then f(x_1) < f(x_2)

-strictly decreasing: x_1 < x_2, then f(x_1) > f(x_2)

-exponential function and population growth

divide-and-conquer: chocolate piles



----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 5.1 - Introduction to boolean algebra - George Boole
----------------------------------------------------------------
----------------------------------------------------------------
Boolean algebra: 1 - T, 0 - F

Boolean variables: variables with value 1 or 0

Boolean expressions: applying Boolean operations to Boolean variables

**5.2) Boolean functions**

input/output table

literal: a Boolean variable or the complement of a Boolean variable

minterm: a product of literals

**5.3) Disjunctive and conjunctive normal form**

DNF: disjunctive normal form = Boolean expression that is a sum of products of literals

disjunctive: "mathematically the same"

DNF: c_1 + c_2 + ... c_m

CNF: conjunctive normal form = Boolean expression is a products of sums of literals

-each term called a clause

CNF: d_1*d_2*...*d_m


**5.6) Gates and circuits**

Gates: circuits are built from electircal devices

AND gate: computes Boolean multiplication

OR gate: computes Boolean addition

inverter: computes the complement

combinatorial circuit: 

----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 6.1 - Sum and product rule
----------------------------------------------------------------
----------------------------------------------------------------
-Intoduction to counting: solving complex number calculations

-cupcake rule

-product rule<screenshot>: provides a way to count sequences

-counting strings: sum of a set of numbers, called alphabet

How many strings of length 4 are there over the alphabet {a,b,c} that end with the char
c?

|{a,b,c}^3 x {c}| = |{a,b,c}|^3 * |{c}| = 3^3*1 =27

How many strings of length 4 are there over the alphabet {a,b,c}?

|{a,b,c}^4|=|{a,b,c}|^4 = 3^4 = 81

How many combinations of passwords are there lowercase [a-z] and [0-9] for passwords
length 16 and start with a number?

== 10 * 36^15


**6.2) The bijection rule**

Bijection rule: if there's a bijection from one set to another, then the two sets have the
	same cardinality

k-to-1 rule:

**6.3) The generalized product rule**

(5)(5)*8*7*6

**6.4) Counting permutations**

r-permutation: sequence of r items with no repetitions, all taken from the same set

P(n,r) = N! / (n - r)!

permutation: a sequence that contains each element of a finite set exactly once

**6.5) Counting subsets: 'n choose r' notation**

identity: holds for all values for which the expressions in the equation are well defined

-counting library strings

**6.6) Subset and permutation examples**

**6.7) Counting by complement**

**6.8) Permutations with repetitions**


----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 7.1 - Probability of an event
----------------------------------------------------------------
----------------------------------------------------------------
-Computer science: randomization and probability are ubiquitous

-experiment: procedure that results in one out of a number of possible outcomes

-outcomes: set of all possible outcomes is called sample space

-subset of sample space is an event

Discrete probability: sample space is finite or countably infinite set

Countably infinit: one-to-one correspondence between the elements of the set and the integers

Uncountably infinite: infinite set that is not countably infinite

-Uniform distribution

-Dice probability

-Rank and suit of cards

-Redundant data storage


7**.2) Unions and complements of events**

-Complement of an event

**7.3) Conditional probability and independence**

-Conditional Probability

-Independent events - conditioning on one event does not change the probability of the other event

-Counting the probabilities of two independent events

-mutual independence

**7.4) Baye's theorem**

**7.5) Random variables**

-Random variable X

-Random variables and probabilities

-Distribution over a random variable

**7.6) Expectation of a random variable**

-Expected value

-Expectation of a random variable

EXAMPLE Expected sum:
-------------
p(x=6)

(1,4)(4,1), (2,3)(3,2)

(4,6)(6,4), (5,5)

p(x=6) = 7/36

p(x=1)

(2,6)(6,2), (3,5)(5,3), (4,4)

(3,6)(6,3), (4,5)(5,4)

p(x=1) = 9/36 = 1/4

p(x=-2)

1 - 7/36 - 1/4 = 5/9 = 20/36

E[X] = 6(7/36) + (1)(1/4) - 2(5/9)
-------------

**7.8) Bernoulli trails**

-Bernoulli trial: an experiment with two outcomes: success and failure

Bernoulli proccess: sequence of independent bernoulli trials

-Binomial distribution

-Expected number of successes



**8.1)**

algorithm, psuedocode, assignment, return

-The if-statement and the if-else statement

-for loop

-while loop

-nested for loop

8.1.12

-->

#code
--------
count:= 0
For i=1 to 3
    For j = i+1 to 4
        count:= count + i * j
    End-for
End-for
--------

equals: 1(2+3+4)+2(3+4)+3(4) = 35


#bigO
#algorithm

**8.2) Asymptotic growth of functions**

asymptotic growth: measure of how fast the output f(n) grows as the input n grows

Oh(Ohm) and theta, called asymptotic notation)

-evaluates the efficiency of algorithms

-F=O(g) is read "f is Oh of g"

-witness

-Oh notation

-Theta notation and polynomials

-Asymptotic growth of logarithm functions with different bases

-The growth rate of common functions in analysis of algorithms

constant function

EX: since 2 ≤ 3, it is true that 2n is O(3n).

-rules about asymptotic growth



**8.3) Analysis of algorithms**

Algorith: describes underlying method for how a computational problem is solved

-computational complexity

-space complexity

-Asymptotic complexity

-Asymptotic time complexity of an algorithm is the rate of asymptotic grown of the algorithm's
	time complexity function f(n)

-worst-case complexity

-average-case analysis

-polynomial time algorithm

-efficient algorithm



**8.4) Finite state machines**

Finite State Machines(FSM) consists of a finite set of states with transitions between
	between the states triggered by different input actions

-can model logical devices

-used in specifying network and communication protocols, compiler design, and text search

-called finite state automation (plural: finite state automata)

-current state is only information that the FSM remembers about the past

-reacting to input

transition function: the reaction to a finite state machine

Finite State Machines with input

Finite State Machines that recognize properties

-even and odd string = computes the parity of a string

-recognizing valid passwords



----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 9 - Sequences
----------------------------------------------------------------
----------------------------------------------------------------
**9.1) Sequences**

Sequence: a special type of function in which the domain is a set of consecutive integers

finite sequence: a sequence with a finite domain

initial index

final index

initial term

final term

infinite sequence: a sequence with an infinite domain

explicit formula

-increasing and decreasing sequences

increasing: every two consecutive indices, k and k+1, a_k < a_k+1

non-decreasing: every two consecutive indices, k and k+1, a_k <= a_k+1

decreasing: a_k > a_k+1

non-increasing: a_k >= a_k+1

-non-increasing and non-decreasing: 2,2,2,2

-Geometric sequences: fixed number * common ration of previous term

-can be infinite or finite

-Arithmetic sequences

9.1.4a,c


**9.2) Recurrence relations**

Recurrence relation: term defined from previous term

*like adding a fixed value to the previous number

-Leonardo Fibonacci, uses recurrence relation

-dynamical system

fibonacci's rabbit colony is an example of dynamical system: a system that changes over time


**9.3) Summations**

Summation notation: sum of terms in a numerical sequence

index

lower limit

upper limit

summation form

expanded form

-pulling out a final term from a summation

-changes of variables in summations

-closed forms for sums



--------------------------------------------------------------------------------
**9.4) Mathematical induction**
--------------------------------------------------------------------------------
base case: theorem is true for the first value in the sequence

inductive step: if theorem is true for k, then the theorem also holds for k + 1

-principle of mathematical induction

:if base case is true and inductive step is true, then the theorem holds for all positive 
	integers

inductive hypothesis


**9.5) More inductive proofs**

-Proving a divisibility proof by induction

-Inductive proofs showing the closed forms for sums of airthmetic and geometric sequences

-Closed form for the sum of terms in a geometric sequence

-An inductive proof for set operations

#recursive

**9.8) Recursive definitions**

factorial function: f(n) = n!

recursive definition: value of function is defined in terms of the output value of the function on
	smaller input values

recursion: compute the value of a function using the result of the funciton on smaller input values

-using recursive definition of n! to computer 4!

-user recursion to define functions, sequences and sets


-Recursively defined sets
- Components of a recursive definition of a set
- basis: one or more elements are in the set
- recursive rule
- exclusion statement

-Recursive definition of the set of all properly nested parentheses
Example: Binary strings

-Recursive definition for the length of a binary string

-Recursive definition for perfect binary trees


**9.10) Recursive algorithms**

Recursive algorithm: an algorithm that calls itself

recursive calls: an algorithm's calls to itself

**9.12) Analyzing the time complexity of recursive algorithms**
time complexity

-Overview of analyzing recursive algorithms: a two step proccess

-Simplifying recurrence relations for asymptotic analysis

-Deriving a simplified recurrence relation for asymptotic analysis


**9.13) Divide-and-conquer algorithms: Introduction and mergesort**

-MinList

-SumList

-Mergesort

sorting algorithm

-The queue data structure

data structure: way of organizing data in a computer so that the data can be accessed and
	updated efficiently

-The merge operation
-Psuedo-code for mergesort

**9.14) Divide-and-conquer algorithms: Binary search**

search algorithm: find a target item in a list

binary search: efficient to search for a target item in a sorted list

-Recursive binary search

-Psuedo-code

-Analyzing recursive binary search

**9.15) Solving linear homogeneous recurrence relations**

-solving a recurrence relation

-linear homogeneous recurrence relations

Z:\CSC331 - Discrete Structures and Logix\2021-12-18 08_16_22-Section 9.15 - CSC 331_ Discrete Structures and Logic and 2 more pages - Persona.png

Z:\CSC331 - Discrete Structures and Logix\2021-12-18 08_17_33-Section 9.15 - CSC 331_ Discrete Structures and Logic and 2 more pages - Persona.png

-general solution to the recurrence relation

-the golden ration

-characteristic equations with multiple roots

**9.16) Solving linear non-homogeneous recurrence relations**

-Particular and homogeneous solutions

-use initial conditions to derive the final soution

-determining the form of the particular solution

**9.17) Divide-and-conquer recurrence relations**

-deriving solutions to divide-and-conquer recurrence relations

-Expressing the formula as a geometric sum

-The Master Theorem

----------------------------------------------------------------
----------------------------------------------------------------
# Chapter 10 - Introduction to graphs
----------------------------------------------------------------
----------------------------------------------------------------
**10.1) Introduction to graphs**

undirected graph: edges are unordered pairs of vertices

finite - a graph is finite if vertex set is finite

vertex - usually represented pictorially by a dot with a label

parallel edges: multiple edges bwtween the same pair of vertices

simple graph: if a graph has no parallel edges or self-loops

adjacent: edge between two vertices

endpoints: the points of edge

incident: edge is incident to vertices but two vertices can not be incident to each other

neighbor: neighbor vertices from edge endpoints

degree: the number of neighbors it has

total degree: sum of all degrees of all the vertices

regular graph: all vertices have the same degree

d-regular graph: all vertices have degree d

subgraph: when a graph contains another graph
--------

-Graph terminology

-Common graphs

complete graph. K_n is called the comlete graph, called a zlique of size n or an n-clique


**10.2) Graph representations**

-Adjacency list representation for graphs

-Matrix representation for graphs

**10.4) Walks, trails, circuits, paths, and cycles**

walk: sequence of alternating vertices and edges that starts and ends with a vertex
```
	<v_0,{v_0,v_1}, v_1, {v_1,v_2} v_2,...,v_l-1,{v_l-1,v_1},v_1>
```
edge, vertice, edge, vertice

length of a walk: I, the number of edges in the walk

open walk: walk in which the first and last vertices are not the same

closed walk: walk in which the first and last vertices are the same

-kinds of walks
- trail: open walk, no edge repeats
- circuit: closed walk, no edge repeats
- path: trail in which no vertex repeats
- cycle: circuit of length > 1, no vertex repeats except first and last which are the same

**10.5) Graph connectivity**
-connected components
k-connectivity

**10.6) Euler circuits and trails**

**10.7) Hamiltonian cycles and paths**






















