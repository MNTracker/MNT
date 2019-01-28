MNT Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/MNTracker/MNT.svg?branch=master)](https://travis-ci.org/MNTracker/MNT) [![GitHub version](https://badge.fury.io/gh/MNTracker%2FMNT.svg)](https://badge.fury.io/gh/MNTracker%2FMNT)

MNT is a cutting edge cryptocurrency, with many features not available in most other cryptocurrencies.
- Anonymized transactions using coin mixing technology, we call it _Obfuscation_.
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftTX_.
- Decentralized blockchain voting providing for consensus based advancement of the current Masternode
  technology used to secure the network and provide the above features, each Masternode is secured
  with a collateral of 10K MNT.

More information at [mnt.org](http://www.mnt.org) Visit our ANN thread at [BitcoinTalk](http://www.bitcointalk.org/index.php?topic=1262920)

### Coin Specs
<table>
<tr><td>Algo</td><td>X11</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>125 MNT</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>209,899,875 MNT</td></tr>
<tr><td>Premine</td><td>100,000 MNT*</td></tr>
</table>

*100,000 MNT Premine was burned in block [1](http://www.presstab.pw/phpexplorer/MNT/block.php?blockhash=206d9cfe859798a0b0898ab00d7300be94de0f5469bb446cecb41c3e173a57e0)

### Reward Distribution

<table>
<th colspan=4>PoW Phase</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th><th>Duration (Days)</th></tr>
<tr><td>1</td><td>210,000 MNT</td><td>Initial Premine</td><td>0 Days</td></tr>
<tr><td>2-500</td><td>0.25 MNT</td><td>Open Mining</td><td> Approx 8 Hours</td></tr>
<tr><th colspan=4>PoS Phase</th></tr>
<tr><th>Block Height</th><th colspan=3>Reward Amount</th></tr>
<tr><td>501-Infinite</td><td colspan=3>Variable based on SeeSaw Reward Mechanism</td></tr>
</table>

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes</th><th>Miner</th><th>Budget</th>
<tr><td>2-500</td><td>100% (0.25 MNT)</td><td>N/A</td><td>N/A</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Collateral</th><th>Reward</th><th>Masternodes</th><th>Stakers</th>
<tr><td>Phase 1</td><td>501-3,000</td><td>100 MNT</td><td>0.25 MNT</td><td>90% (0.225 MNT)</td><td>10% (0.025 MNT)</td></tr>
<tr><td>Phase 2</td><td>3,001-6,000</td><td>200 MNT</td><td>0.50 MNT</td><td>90% (0.45 MNT)</td><td>10% (0.05 MNT)</td></tr>
<tr><td>Phase 3</td><td>6,001-15,000</td><td>300 MNT</td><td>1.00 MNT</td><td>80% (0.80 MNT)</td><td>20% (0.20 MNT)</td></tr>
<tr><td>Phase 4</td><td>15,001-25,000</td><td>450 MNT</td><td>2.00 MNT</td><td>80% (1.60 MNT)</td><td>20% (0.40 MNT)</td></tr>
<tr><td>Phase 5</td><td>25,001-35,000</td><td>600 MNT</td><td>3.00 MNT</td><td>80% (2.40 MNT)</td><td>20% (0.60 MNT)</td></tr>
<tr><td>Phase 6</td><td>35,001-45,000</td><td>750 MNT</td><td>4.00 MNT</td><td>80% (3.20 MNT)</td><td>20% (0.80 MNT)</td></tr>
<tr><td>Phase 7</td><td>45,001-55,000</td><td>900 MNT</td><td>5.00 MNT</td><td>80% (4.00 MNT)</td><td>20% (1.00 MNT)</td></tr>
<tr><td>Phase 8</td><td>55,001-65,000</td><td>1,100 MNT</td><td>7.00 MNT</td><td>80% (5.60 MNT)</td><td>20% (1.40 MNT)</td></tr>
<tr><td>Phase 9</td><td>65,001-75,000</td><td>1,300 MNT</td><td>9.00 MNT</td><td>80% (7.20 MNT)</td><td>20% (1.80 MNT)</td></tr>
<tr><td>Phase 10</td><td>75,001-85,000</td><td>1,500 MNT</td><td>12.00 MNT</td><td>70% (8.40 MNT)</td><td>30% (3.60 MNT)</td></tr>
<tr><td>Phase 11</td><td>85,001-95,000</td><td>1,750 MNT</td><td>16.00 MNT</td><td>70% (11.20 MNT)</td><td>30% (4.80 MNT)</td></tr>
<tr><td>Phase 12</td><td>95,001-105,000</td><td>2,000 MNT</td><td>20.50 MNT</td><td>70% (14.35 MNT)</td><td>30% (6.15 MNT)</td></tr>
<tr><td>Phase 13</td><td>105,001-115,000</td><td>2,300 MNT</td><td>26.65 MNT</td><td>70% (18.66 MNT)</td><td>30% (8.00 MNT)</td></tr>
<tr><td>Phase 14</td><td>115,001-125,000</td><td>2,600 MNT</td><td>34.00 MNT</td><td>65% (22.10 MNT)</td><td>35% (11.90 MNT)</td></tr>
<tr><td>Phase 15</td><td>125,001-135,000</td><td>2,900 MNT</td><td>44.00 MNT</td><td>65% (28.60 MNT)</td><td>35% (15.40 MNT)</td></tr>
<tr><td>Phase 16</td><td>135,001-145,000</td><td>3,300 MNT</td><td>58.00 MNT</td><td>65% (37.70 MNT)</td><td>35% (20.30 MNT)</td></tr>
<tr><td>Phase 17</td><td>145,001-155,000</td><td>4,000 MNT</td><td>75.00 MNT</td><td>65% (48.75 MNT)</td><td>35% (26.25 MNT)</td></tr>
<tr><td>Phase 18</td><td>155,001-165,000</td><td>4,700 MNT</td><td>95.00 MNT</td><td>60% (57.00 MNT)</td><td>40% (38.00 MNT)</td></tr>
<tr><td>Phase 19</td><td>165,001-175,000</td><td>5,500 MNT</td><td>125.00 MNT</td><td>60% (75.00 MNT)</td><td>40% (50.00 MNT)</td></tr>
<tr><td>Phase 20</td><td>175,001-185,000</td><td>6,500 MNT</td><td>160.00 MNT</td><td>60% (96.00 MNT)</td><td>40% (64.00 MNT)</td></tr>
<tr><td>Phase 21</td><td>185,001-205,000</td><td>7,500 MNT</td><td>168.00 MNT</td><td>55% (92.40 MNT)</td><td>45% (75.60 MNT)</td></tr>
<tr><td>Phase 22</td><td>205,001-225,000</td><td>9,000 MNT</td><td>175.00 MNT</td><td>55% (96.25 MNT)</td><td>45% (78.75 MNT)</td></tr>
<tr><td>Phase 23</td><td>225,001-245,000</td><td>10,500 MNT</td><td>185.00 MNT</td><td>55% (101.75 MNT)</td><td>45% (83.25 MNT)</td></tr>
<tr><td>Phase 24</td><td>245,001-265,000</td><td>12,000 MNT</td><td>195.00 MNT</td><td>55% (107.25 MNT)</td><td>45% (87.75 MNT)</td></tr>
<tr><td>Phase 25</td><td>265,001-285,000</td><td>13,500 MNT</td><td>205.00 MNT</td><td>55% (112.75 MNT)</td><td>45% (92.25 MNT)</td></tr>
<tr><td>Phase 26</td><td>285,001-305,000</td><td>15,000 MNT</td><td>215.00 MNT</td><td>55% (118.25 MNT)</td><td>45% (96.75 MNT)</td></tr>
<tr><td>Phase 27</td><td>305,001-325,000</td><td>16,500 MNT</td><td>225.00 MNT</td><td>55% (123.75 MNT)</td><td>45% (101.25 MNT)</td></tr>
<tr><td>Phase 28</td><td>325,001-345,000</td><td>18,000 MNT</td><td>235.00 MNT</td><td>55% (129.25 MNT)</td><td>45% (105.75 MNT)</td></tr>
<tr><td>Phase 29</td><td>345,001-365,000</td><td>19,500 MNT</td><td>245.00 MNT</td><td>55% (134.75 MNT)</td><td>45% (110.25 MNT)</td></tr>
<tr><td>Phase 30</td><td>365,001-385,000</td><td>21,000 MNT</td><td>260.00 MNT</td><td>55% (143.00 MNT)</td><td>45% (117.00 MNT)</td></tr>
<tr><td>Phase 31</td><td>385,001-405,000</td><td>22,500 MNT</td><td>275.00 MNT</td><td>50% (137.50 MNT)</td><td>50% (137.50 MNT)</td></tr>
<tr><td>Phase 32</td><td>405,001-425,000</td><td>24,000 MNT</td><td>290.00 MNT</td><td>50% (145.00 MNT)</td><td>50% (145.00 MNT)</td></tr>
<tr><td>Phase 33</td><td>425,001-445,000</td><td>25,500 MNT</td><td>305.00 MNT</td><td>50% (152.50 MNT)</td><td>50% (152.50 MNT)</td></tr>
<tr><td>Phase 34</td><td>445,001-465,000</td><td>27,000 MNT</td><td>320.00 MNT</td><td>50% (160.00 MNT)</td><td>50% (160.00 MNT)</td></tr>
<tr><td>Phase 35</td><td>465,001-485,000</td><td>28,500 MNT</td><td>335.00 MNT</td><td>50% (167.50 MNT)</td><td>50% (167.50 MNT)</td></tr>
<tr><td>Phase 36</td><td>485,001-505,000</td><td>30,000 MNT</td><td>350.00 MNT</td><td>50% (175.00 MNT)</td><td>50% (175.00 MNT)</td></tr>
<tr><td>Phase 37</td><td>505,001-525,000</td><td>31,500 MNT</td><td>365.00 MNT</td><td>50% (182.50 MNT)</td><td>50% (182.50 MNT)</td></tr>
<tr><td>Phase 38</td><td>525,001-545,000</td><td>33,000 MNT</td><td>380.00 MNT</td><td>50% (190.00 MNT)</td><td>50% (190.00 MNT)</td></tr>
<tr><td>Phase 39</td><td>545,001-565,000</td><td>34,500 MNT</td><td>400.00 MNT</td><td>50% (200.00 MNT)</td><td>50% (200.00 MNT)</td></tr>
<tr><td>Phase 40</td><td>565,001-585,000</td><td>36,000 MNT</td><td>425.00 MNT</td><td>50% (212.50 MNT)</td><td>50% (212.50 MNT)</td></tr>
<tr><td>Phase 41</td><td>585,001-768,198</td><td>37,500 MNT</td><td>500.00 MNT</td><td>50% (250.00 MNT)</td><td>50% (250.00 MNT)</td></tr>
</table>
