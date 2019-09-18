/***************************************************************************
/**
 * @file XGBConfig.h
 * @date 2017/05/24 13:24:02
 * @brief 
 *  
 **/

/* The following comments contain the feature name and its corresponding index used by model
* xpos    0
* ypos    1
* width 2
* height    3
* is_menu_like    
* children_num    4
* sibling_num  5
* has_js_sibling   6
* is_after_outsite_js 7
* has_ad_id_class 8
* link_len 9
* is_ad_pattern_link  10
* is_outsite_link 11
* id_len  12
* z_index 13
* is_inserted_by_js   14
* is_fixed    15
* subtree_ad_id_class_num 16
* subtree_background_img_num  17
* subtree_img_num 18
* subtree_wide_img_num    19
* subtree_long_narrow_img_num 20
* subtree_wide_gif_img_num    21
* subtree_text_len    22
* subtree_functional_node_num 23
* subtree_anchor_num  24
* subtree_outside_anchor_num  25
* subtree_anchor_len  26
* subtree_frame_with_long_link_num    27
* subtree_frame_ratio 28
* subtree_external_resource_num   29
* subtree_hit_ads_keyword 30
* subtree_hit_app_keyword_num 31
* subtree_closable_node_num   32
*/

#ifndef  XGB_CONFIG_H
#define  XGB_CONFIG_H

const char* XGB_MODEL_STR =
    "booster[0]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<2.12374e+09] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.165889\n" \
    "8:leaf=0.154247\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.122084\n" \
    "10:leaf=0.19877\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[15<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.18029\n" \
    "12:leaf=0.17193\n" \
    "6:[3<175.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.197948\n" \
    "14:leaf=-0.126531\n" \
    "booster[1]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<4999.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.152476\n" \
    "8:leaf=0.120491\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.11036\n" \
    "10:leaf=0.180769\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[15<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.163729\n" \
    "12:leaf=0.157057\n" \
    "6:[3<175.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.179976\n" \
    "14:leaf=-0.115349\n" \
    "booster[2]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<2.12374e+09] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.150048\n" \
    "8:leaf=0.119078\n" \
    "4:[16<13.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.158243\n" \
    "10:leaf=0.0490752\n" \
    "2:[20<0.5] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.119424\n" \
    "12:leaf=0.113869\n" \
    "6:[3<175.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.166414\n" \
    "14:leaf=-0.105833\n" \
    "booster[3]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<2.12374e+09] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.139202\n" \
    "8:leaf=0.109435\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0913271\n" \
    "10:leaf=0.158158\n" \
    "2:[20<0.5] yes=5,no=6,missing=5\n" \
    "5:[14<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0963383\n" \
    "12:leaf=0.120129\n" \
    "6:[3<171.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.156033\n" \
    "14:leaf=-0.065452\n" \
    "booster[4]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<2.12374e+09] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.130161\n" \
    "8:leaf=0.101044\n" \
    "4:[16<9.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.144534\n" \
    "10:leaf=0.0676305\n" \
    "2:[20<0.5] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.105723\n" \
    "12:leaf=0.0974739\n" \
    "6:[22<13] yes=13,no=14,missing=13\n" \
    "13:leaf=0.148225\n" \
    "14:leaf=-0.00638279\n" \
    "booster[5]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[9<1026.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.114236\n" \
    "8:leaf=0.277027\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0733537\n" \
    "10:leaf=0.14352\n" \
    "2:[20<0.5] yes=5,no=6,missing=5\n" \
    "5:[12<1] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0752719\n" \
    "12:leaf=0.12735\n" \
    "6:[3<175.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.140487\n" \
    "14:leaf=-0.0982882\n" \
    "booster[6]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[14<0.5] yes=3,no=4,missing=3\n" \
    "3:[28<0.894065] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.127025\n" \
    "8:leaf=0.0656153\n" \
    "4:[25<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.019124\n" \
    "10:leaf=0.114926\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[15<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.118255\n" \
    "12:leaf=0.183906\n" \
    "6:[22<13] yes=13,no=14,missing=13\n" \
    "13:leaf=0.135625\n" \
    "14:leaf=-0.0157636\n" \
    "booster[7]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<4.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.115895\n" \
    "8:leaf=0.0691577\n" \
    "4:[16<9.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.12884\n" \
    "10:leaf=0.0476506\n" \
    "2:[3<159.5] yes=5,no=6,missing=5\n" \
    "5:[22<27.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.122927\n" \
    "12:leaf=-0.0353154\n" \
    "6:[6<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.124355\n" \
    "14:leaf=0.0833574\n" \
    "booster[8]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[14<0.5] yes=3,no=4,missing=3\n" \
    "3:[28<0.854909] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.116758\n" \
    "8:leaf=0.0570127\n" \
    "4:[9<1026.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.00176236\n" \
    "10:leaf=0.249789\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[30<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0991168\n" \
    "12:leaf=0.321883\n" \
    "6:[22<13] yes=13,no=14,missing=13\n" \
    "13:leaf=0.126951\n" \
    "14:leaf=-0.0119035\n" \
    "booster[9]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<4.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.107289\n" \
    "8:leaf=0.0658637\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0556246\n" \
    "10:leaf=0.13059\n" \
    "2:[20<0.5] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0819758\n" \
    "12:leaf=0.0799657\n" \
    "6:[3<175.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.122486\n" \
    "14:leaf=-0.0959687\n" \
    "booster[10]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[14<0.5] yes=3,no=4,missing=3\n" \
    "3:[31<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0985752\n" \
    "8:leaf=0.403213\n" \
    "4:[9<1025.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.00206124\n" \
    "10:leaf=0.226793\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[15<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.099016\n" \
    "12:leaf=0.1705\n" \
    "6:[22<13] yes=13,no=14,missing=13\n" \
    "13:leaf=0.12034\n" \
    "14:leaf=-0.0195467\n" \
    "booster[11]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<2.12374e+09] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0962975\n" \
    "8:leaf=0.0921817\n" \
    "4:[16<9.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.120971\n" \
    "10:leaf=0.0392771\n" \
    "2:[3<159.5] yes=5,no=6,missing=5\n" \
    "5:[22<8.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.11253\n" \
    "12:leaf=0.000967998\n" \
    "6:[15<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0907429\n" \
    "14:leaf=0.172915\n" \
    "booster[12]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0984303\n" \
    "8:leaf=0.0542844\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0502385\n" \
    "10:leaf=0.124662\n" \
    "2:[20<0.5] yes=5,no=6,missing=5\n" \
    "5:[12<1] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0532708\n" \
    "12:leaf=0.107278\n" \
    "6:[19<1.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.114678\n" \
    "14:leaf=-0.0886425\n" \
    "booster[13]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[12<1.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0923327\n" \
    "8:leaf=0.0709281\n" \
    "4:[9<1026.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0151297\n" \
    "10:leaf=0.223145\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[30<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0788942\n" \
    "12:leaf=0.341497\n" \
    "6:[22<13] yes=13,no=14,missing=13\n" \
    "13:leaf=0.113215\n" \
    "14:leaf=-0.0247508\n" \
    "booster[14]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0927048\n" \
    "8:leaf=0.0501813\n" \
    "4:[16<9.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.115658\n" \
    "10:leaf=0.0275916\n" \
    "2:[3<159.5] yes=5,no=6,missing=5\n" \
    "5:[22<27.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.102287\n" \
    "12:leaf=-0.0201118\n" \
    "6:[6<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.103103\n" \
    "14:leaf=0.0802408\n" \
    "booster[15]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[12<1.5] yes=3,no=4,missing=3\n" \
    "3:[31<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.077058\n" \
    "8:leaf=0.383855\n" \
    "4:[9<1025.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0148653\n" \
    "10:leaf=0.205161\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[30<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0713417\n" \
    "12:leaf=0.293\n" \
    "6:[19<1.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.108835\n" \
    "14:leaf=-0.100883\n" \
    "booster[16]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<4.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0860988\n" \
    "8:leaf=0.0572052\n" \
    "4:[12<36.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.103603\n" \
    "10:leaf=-0.0672324\n" \
    "2:[3<158.5] yes=5,no=6,missing=5\n" \
    "5:[22<7.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.101338\n" \
    "12:leaf=0.00719839\n" \
    "6:[15<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0762216\n" \
    "14:leaf=0.153861\n" \
    "booster[17]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[7<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<24] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0733728\n" \
    "8:leaf=0.0627719\n" \
    "4:[12<21.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.154408\n" \
    "10:leaf=-0.102741\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[15<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0752219\n" \
    "12:leaf=0.166156\n" \
    "6:[19<1.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.105655\n" \
    "14:leaf=-0.0984277\n" \
    "booster[18]:\n" \
    "0:[25<0.5] yes=1,no=2,missing=1\n" \
    "1:[11<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.072551\n" \
    "8:leaf=0.104878\n" \
    "4:[7<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0378855\n" \
    "10:leaf=0.196713\n" \
    "2:[22<60.5] yes=5,no=6,missing=5\n" \
    "5:[14<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.04043\n" \
    "12:leaf=0.105445\n" \
    "6:[8<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0851497\n" \
    "14:leaf=0.109836\n" \
    "booster[19]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[12<1.5] yes=3,no=4,missing=3\n" \
    "3:[31<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0673066\n" \
    "8:leaf=0.329133\n" \
    "4:[24<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0157723\n" \
    "10:leaf=0.0893604\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[30<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0607699\n" \
    "12:leaf=0.278344\n" \
    "6:[22<13] yes=13,no=14,missing=13\n" \
    "13:leaf=0.104766\n" \
    "14:leaf=-0.0411304\n" \
    "booster[20]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[14<0.5] yes=3,no=4,missing=3\n" \
    "3:[28<0.854909] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0846369\n" \
    "8:leaf=0.0756688\n" \
    "4:[9<1025.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0086832\n" \
    "10:leaf=0.159113\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[15<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.068824\n" \
    "12:leaf=0.161959\n" \
    "6:[19<1.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.102014\n" \
    "14:leaf=-0.105636\n" \
    "booster[21]:\n" \
    "0:[25<0.5] yes=1,no=2,missing=1\n" \
    "1:[3<36.5] yes=3,no=4,missing=3\n" \
    "3:[13<-500000] yes=7,no=8,missing=7\n" \
    "7:leaf=0.384907\n" \
    "8:leaf=-0.0941334\n" \
    "4:[22<7.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0347372\n" \
    "10:leaf=-0.0737567\n" \
    "2:[22<26.5] yes=5,no=6,missing=5\n" \
    "5:[19<1.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0959915\n" \
    "12:leaf=-0.0940436\n" \
    "6:[8<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.061259\n" \
    "14:leaf=0.116449\n" \
    "booster[22]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[0<184] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0686404\n" \
    "8:leaf=0.091\n" \
    "4:[15<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0758867\n" \
    "10:leaf=0.193355\n" \
    "2:[3<160.5] yes=5,no=6,missing=5\n" \
    "5:[22<7.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0920181\n" \
    "12:leaf=0.0142339\n" \
    "6:[6<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0917928\n" \
    "14:leaf=0.0700037\n" \
    "booster[23]:\n" \
    "0:[12<2.5] yes=1,no=2,missing=1\n" \
    "1:[31<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0597775\n" \
    "8:leaf=0.0673858\n" \
    "4:[13<89] yes=9,no=10,missing=9\n" \
    "9:leaf=0.335468\n" \
    "10:leaf=0.127065\n" \
    "2:[3<13.5] yes=5,no=6,missing=5\n" \
    "5:[24<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.112981\n" \
    "12:leaf=0.0711963\n" \
    "6:[23<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.0819768\n" \
    "14:leaf=-0.106584\n" \
    "booster[24]:\n" \
    "0:[12<2.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0648227\n" \
    "8:leaf=0.0638781\n" \
    "4:[16<9.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.112831\n" \
    "10:leaf=-0.176986\n" \
    "2:[24<0.5] yes=5,no=6,missing=5\n" \
    "5:[9<996] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0404373\n" \
    "12:leaf=0.15586\n" \
    "6:[23<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.0948325\n" \
    "14:leaf=-0.107558\n" \
    "booster[25]:\n" \
    "0:[29<0.5] yes=1,no=2,missing=1\n" \
    "1:[0<184] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0638327\n" \
    "8:leaf=0.0843248\n" \
    "4:[15<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0702008\n" \
    "10:leaf=0.183191\n" \
    "2:[3<160.5] yes=5,no=6,missing=5\n" \
    "5:[2<360.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0162777\n" \
    "12:leaf=0.0903562\n" \
    "6:[15<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0667436\n" \
    "14:leaf=0.137677\n" \
    "booster[26]:\n" \
    "0:[3<38.5] yes=1,no=2,missing=1\n" \
    "1:[25<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<149.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0931506\n" \
    "8:leaf=0.0843754\n" \
    "4:[14<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0330013\n" \
    "10:leaf=0.104831\n" \
    "2:[22<7.5] yes=5,no=6,missing=5\n" \
    "5:[6<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0186755\n" \
    "12:leaf=0.109694\n" \
    "6:[31<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0705974\n" \
    "14:leaf=0.280411\n" \
    "booster[27]:\n" \
    "0:[12<1.5] yes=1,no=2,missing=1\n" \
    "1:[30<0.5] yes=3,no=4,missing=3\n" \
    "3:[31<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0435334\n" \
    "8:leaf=0.236152\n" \
    "4:[19<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.460607\n" \
    "10:leaf=0.110989\n" \
    "2:[3<16.5] yes=5,no=6,missing=5\n" \
    "5:[24<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.102678\n" \
    "12:leaf=0.0621522\n" \
    "6:[22<47.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.0766704\n" \
    "14:leaf=-0.0461646\n" \
    "booster[28]:\n" \
    "0:[22<7.5] yes=1,no=2,missing=1\n" \
    "1:[3<25.5] yes=3,no=4,missing=3\n" \
    "3:[28<0.999815] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0607483\n" \
    "8:leaf=0.2387\n" \
    "4:[6<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0151784\n" \
    "10:leaf=0.0990284\n" \
    "2:[31<0.5] yes=5,no=6,missing=5\n" \
    "5:[30<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0872654\n" \
    "12:leaf=0.186486\n" \
    "6:[2<25] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.119062\n" \
    "14:leaf=0.226028\n" \
    "booster[29]:\n" \
    "0:[13<2.12374e+09] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[7<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0516625\n" \
    "8:leaf=0.0864709\n" \
    "4:[29<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0347401\n" \
    "10:leaf=0.0875653\n" \
    "2:[17<0.5] yes=5,no=6,missing=5\n" \
    "5:[5<57.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.123996\n" \
    "12:leaf=-0.165862\n" \
    "6:[0<190.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0811957\n" \
    "14:leaf=0.128098\n" \
    "booster[30]:\n" \
    "0:[15<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0703536\n" \
    "8:leaf=0.080004\n" \
    "4:[3<160.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0619997\n" \
    "10:leaf=-0.064008\n" \
    "2:[0<184] yes=5,no=6,missing=5\n" \
    "5:[2<107.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0830066\n" \
    "12:leaf=0.106193\n" \
    "6:[13<89.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.261463\n" \
    "14:leaf=0.132682\n" \
    "booster[31]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[22<3.5] yes=3,no=4,missing=3\n" \
    "3:[3<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0635775\n" \
    "8:leaf=0.0294615\n" \
    "4:[31<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0798777\n" \
    "10:leaf=0.20146\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[16<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.410316\n" \
    "12:leaf=0.0396131\n" \
    "6:[3<171.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.139008\n" \
    "14:leaf=-0.0236828\n" \
    "booster[32]:\n" \
    "0:[14<0.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0660116\n" \
    "8:leaf=0.0469103\n" \
    "4:[0<20.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0093191\n" \
    "10:leaf=0.209264\n" \
    "2:[24<0.5] yes=5,no=6,missing=5\n" \
    "5:[9<996] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0398152\n" \
    "12:leaf=0.132039\n" \
    "6:[23<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.0823925\n" \
    "14:leaf=-0.110662\n" \
    "booster[33]:\n" \
    "0:[7<0.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0530705\n" \
    "8:leaf=0.0592322\n" \
    "4:[0<184] yes=9,no=10,missing=9\n" \
    "9:leaf=0.00334832\n" \
    "10:leaf=0.146945\n" \
    "2:[12<21.5] yes=5,no=6,missing=5\n" \
    "5:[9<193] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0899491\n" \
    "12:leaf=0.139586\n" \
    "6:[24<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.104777\n" \
    "14:leaf=0.0892851\n" \
    "booster[34]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[22<3.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00152459\n" \
    "8:leaf=0.116916\n" \
    "4:[31<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0737944\n" \
    "10:leaf=0.1893\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[16<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.318378\n" \
    "12:leaf=0.0428374\n" \
    "6:[3<171.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.141159\n" \
    "14:leaf=-0.0271762\n" \
    "booster[35]:\n" \
    "0:[25<0.5] yes=1,no=2,missing=1\n" \
    "1:[0<184] yes=3,no=4,missing=3\n" \
    "3:[3<49.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0837447\n" \
    "8:leaf=0.00513099\n" \
    "4:[15<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0689488\n" \
    "10:leaf=0.140216\n" \
    "2:[17<1.5] yes=5,no=6,missing=5\n" \
    "5:[19<1.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0740355\n" \
    "12:leaf=-0.196572\n" \
    "6:[8<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0696771\n" \
    "14:leaf=0.108263\n" \
    "booster[36]:\n" \
    "0:[12<2.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[29<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0610602\n" \
    "8:leaf=0.0208314\n" \
    "4:[16<9.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.102868\n" \
    "10:leaf=-0.129993\n" \
    "2:[13<2.12374e+09] yes=5,no=6,missing=5\n" \
    "5:[9<1051.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.000238482\n" \
    "12:leaf=0.113341\n" \
    "6:[22<31] yes=13,no=14,missing=13\n" \
    "13:leaf=0.113638\n" \
    "14:leaf=-0.102717\n" \
    "booster[37]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0400116\n" \
    "8:leaf=0.0776952\n" \
    "4:[0<184] yes=9,no=10,missing=9\n" \
    "9:leaf=0.00917981\n" \
    "10:leaf=0.135755\n" \
    "2:[3<171.5] yes=5,no=6,missing=5\n" \
    "5:[29<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.263053\n" \
    "12:leaf=0.138734\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.14975\n" \
    "14:leaf=0.114339\n" \
    "booster[38]:\n" \
    "0:[7<0.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0483315\n" \
    "8:leaf=0.0423968\n" \
    "4:[29<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0379716\n" \
    "10:leaf=0.0821208\n" \
    "2:[12<21.5] yes=5,no=6,missing=5\n" \
    "5:[9<193] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0838085\n" \
    "12:leaf=0.131841\n" \
    "6:[29<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0943164\n" \
    "14:leaf=0.123718\n" \
    "booster[39]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[31<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0272129\n" \
    "8:leaf=0.0751588\n" \
    "4:[2<25] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.125493\n" \
    "10:leaf=0.195389\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[3<164] yes=11,no=12,missing=11\n" \
    "11:leaf=0.117468\n" \
    "12:leaf=0.00243371\n" \
    "6:[15<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.231992\n" \
    "14:leaf=0.0778667\n" \
    "booster[40]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[22<3.5] yes=3,no=4,missing=3\n" \
    "3:[24<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.00949432\n" \
    "8:leaf=0.0554065\n" \
    "4:[31<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0690465\n" \
    "10:leaf=0.168879\n" \
    "2:[3<171.5] yes=5,no=6,missing=5\n" \
    "5:[29<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.240633\n" \
    "12:leaf=0.138302\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.143743\n" \
    "14:leaf=0.108642\n" \
    "booster[41]:\n" \
    "0:[7<0.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.045619\n" \
    "8:leaf=0.0529158\n" \
    "4:[0<184] yes=9,no=10,missing=9\n" \
    "9:leaf=0.000894961\n" \
    "10:leaf=0.129287\n" \
    "2:[12<21.5] yes=5,no=6,missing=5\n" \
    "5:[9<208.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0788094\n" \
    "12:leaf=0.128848\n" \
    "6:[24<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0970683\n" \
    "14:leaf=0.0857034\n" \
    "booster[42]:\n" \
    "0:[8<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0427244\n" \
    "8:leaf=0.0772127\n" \
    "4:[3<160.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0586379\n" \
    "10:leaf=-0.0383482\n" \
    "2:[30<0.5] yes=5,no=6,missing=5\n" \
    "5:[12<75] yes=11,no=12,missing=11\n" \
    "11:leaf=0.111414\n" \
    "12:leaf=0.0161811\n" \
    "6:leaf=-0.0237871\n" \
    "booster[43]:\n" \
    "0:[12<2.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[31<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0396862\n" \
    "8:leaf=0.162347\n" \
    "4:[3<7.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.107965\n" \
    "10:leaf=0.0997545\n" \
    "2:[13<2.12374e+09] yes=5,no=6,missing=5\n" \
    "5:[9<1051.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-7.37746e-05\n" \
    "12:leaf=0.104878\n" \
    "6:[22<31] yes=13,no=14,missing=13\n" \
    "13:leaf=0.11165\n" \
    "14:leaf=-0.0958247\n" \
    "booster[44]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<11.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00618503\n" \
    "8:leaf=-0.073029\n" \
    "4:[12<75] yes=9,no=10,missing=9\n" \
    "9:leaf=0.109751\n" \
    "10:leaf=0.0154326\n" \
    "2:[3<171.5] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.214423\n" \
    "12:leaf=0.128241\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.135369\n" \
    "14:leaf=0.105759\n" \
    "booster[45]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0397834\n" \
    "8:leaf=0.0701823\n" \
    "4:[0<184] yes=9,no=10,missing=9\n" \
    "9:leaf=0.00467875\n" \
    "10:leaf=0.121557\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[24<6.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.111733\n" \
    "12:leaf=-0.00683576\n" \
    "6:[4<1.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.361961\n" \
    "14:leaf=-0.0623882\n" \
    "booster[46]:\n" \
    "0:[7<0.5] yes=1,no=2,missing=1\n" \
    "1:[30<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0324279\n" \
    "8:leaf=0.0378911\n" \
    "4:[3<166] yes=9,no=10,missing=9\n" \
    "9:leaf=0.162843\n" \
    "10:leaf=-0.0258647\n" \
    "2:[12<21.5] yes=5,no=6,missing=5\n" \
    "5:[9<208.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0724743\n" \
    "12:leaf=0.124836\n" \
    "6:[29<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0863959\n" \
    "14:leaf=0.126248\n" \
    "booster[47]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0373096\n" \
    "8:leaf=0.0665617\n" \
    "4:[3<135.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0615733\n" \
    "10:leaf=-0.0174978\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.129113\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.175491\n" \
    "12:leaf=-0.00654375\n" \
    "booster[48]:\n" \
    "0:[13<2.14748e+09] yes=1,no=2,missing=1\n" \
    "1:[7<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.036358\n" \
    "8:leaf=0.0530726\n" \
    "4:[12<21.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0933557\n" \
    "10:leaf=-0.0724498\n" \
    "2:[17<0.5] yes=5,no=6,missing=5\n" \
    "5:[28<0.999819] yes=11,no=12,missing=11\n" \
    "11:leaf=0.119626\n" \
    "12:leaf=-0.0756028\n" \
    "6:[0<190.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.100852\n" \
    "14:leaf=0.110123\n" \
    "booster[49]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<11.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00635755\n" \
    "8:leaf=-0.0680865\n" \
    "4:[12<75] yes=9,no=10,missing=9\n" \
    "9:leaf=0.107936\n" \
    "10:leaf=0.0131279\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.197732\n" \
    "12:leaf=0.124607\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.128805\n" \
    "14:leaf=0.104071\n" \
    "booster[50]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0346901\n" \
    "8:leaf=0.0701333\n" \
    "4:[3<135.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0576747\n" \
    "10:leaf=-0.0155241\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.115821\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.170387\n" \
    "12:leaf=-0.000956433\n" \
    "booster[51]:\n" \
    "0:[12<1.5] yes=1,no=2,missing=1\n" \
    "1:[29<1.5] yes=3,no=4,missing=3\n" \
    "3:[28<0.99931] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0416114\n" \
    "8:leaf=0.0651345\n" \
    "4:[19<1.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0963293\n" \
    "10:leaf=-0.173702\n" \
    "2:[13<2.12374e+09] yes=5,no=6,missing=5\n" \
    "5:[10<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.00167676\n" \
    "12:leaf=0.096269\n" \
    "6:[22<31] yes=13,no=14,missing=13\n" \
    "13:leaf=0.107333\n" \
    "14:leaf=-0.0822563\n" \
    "booster[52]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[13<2.14748e+09] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0258211\n" \
    "8:leaf=0.06535\n" \
    "4:[17<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.108117\n" \
    "10:leaf=-0.00470362\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.108558\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.162196\n" \
    "12:leaf=0.000715814\n" \
    "booster[53]:\n" \
    "0:[6<0.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[8<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.037954\n" \
    "8:leaf=0.103214\n" \
    "4:[29<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0512058\n" \
    "10:leaf=0.0767917\n" \
    "2:[3<0.5] yes=5,no=6,missing=5\n" \
    "5:[13<1.57374e+09] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0643371\n" \
    "12:leaf=0.113528\n" \
    "6:[23<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.0671503\n" \
    "14:leaf=-0.0899417\n" \
    "booster[54]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[7<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0305492\n" \
    "8:leaf=0.0664488\n" \
    "4:[2<40.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.000259433\n" \
    "10:leaf=0.10592\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.192214\n" \
    "12:leaf=0.122833\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.123762\n" \
    "14:leaf=0.0980476\n" \
    "booster[55]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[22<9.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00283647\n" \
    "8:leaf=0.10657\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0685341\n" \
    "10:leaf=0.100413\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.101267\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.156481\n" \
    "12:leaf=-8.18377e-05\n" \
    "booster[56]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0378714\n" \
    "8:leaf=0.033754\n" \
    "4:[29<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0307849\n" \
    "10:leaf=0.081581\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[26<9] yes=11,no=12,missing=11\n" \
    "11:leaf=0.119945\n" \
    "12:leaf=0.0385582\n" \
    "6:[7<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.257793\n" \
    "14:leaf=0.0696489\n" \
    "booster[57]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<11.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.0055648\n" \
    "8:leaf=-0.062591\n" \
    "4:[17<2.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.105182\n" \
    "10:leaf=0.0104195\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.187178\n" \
    "12:leaf=0.122186\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.117804\n" \
    "14:leaf=0.0945576\n" \
    "booster[58]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0332407\n" \
    "8:leaf=0.0690808\n" \
    "4:[7<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0233743\n" \
    "10:leaf=0.139467\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.095466\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.153465\n" \
    "12:leaf=0.00486112\n" \
    "booster[59]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[7<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0279888\n" \
    "8:leaf=0.0342677\n" \
    "4:[12<21.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0839058\n" \
    "10:leaf=-0.0564877\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.175635\n" \
    "12:leaf=0.120043\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.113228\n" \
    "14:leaf=0.0912349\n" \
    "booster[60]:\n" \
    "0:[5<244.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0190448\n" \
    "6:leaf=0.0628231\n" \
    "4:[3<58.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.0186101\n" \
    "8:leaf=0.110817\n" \
    "2:leaf=-0.1049\n" \
    "booster[61]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0273875\n" \
    "8:leaf=0.0586626\n" \
    "4:[29<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0290401\n" \
    "10:leaf=0.0797577\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[26<10.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.115177\n" \
    "12:leaf=0.0303271\n" \
    "6:[7<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.240566\n" \
    "14:leaf=0.0618214\n" \
    "booster[62]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[12<2.5] yes=3,no=4,missing=3\n" \
    "3:[29<1.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0309673\n" \
    "8:leaf=0.0706558\n" \
    "4:[13<2.12374e+09] yes=9,no=10,missing=9\n" \
    "9:leaf=0.00914011\n" \
    "10:leaf=0.0831176\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0924886\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.149809\n" \
    "12:leaf=0.00808731\n" \
    "booster[63]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[10<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0234699\n" \
    "8:leaf=0.0321797\n" \
    "4:[22<25.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.115414\n" \
    "10:leaf=-0.10721\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[25<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.169483\n" \
    "12:leaf=0.118553\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.11017\n" \
    "14:leaf=0.0843906\n" \
    "booster[64]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[22<9.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00161463\n" \
    "8:leaf=0.103906\n" \
    "4:[8<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0647665\n" \
    "10:leaf=0.0974503\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0899964\n" \
    "6:[3<157.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.144357\n" \
    "12:leaf=0.00878932\n" \
    "booster[65]:\n" \
    "0:[20<0.5] yes=1,no=2,missing=1\n" \
    "1:[0<184] yes=3,no=4,missing=3\n" \
    "3:[3<58.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0525653\n" \
    "8:leaf=0.00964152\n" \
    "4:[15<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0658679\n" \
    "10:leaf=0.108342\n" \
    "2:[22<12.5] yes=5,no=6,missing=5\n" \
    "5:[29<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0322918\n" \
    "12:leaf=0.0863525\n" \
    "6:[12<4.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.202089\n" \
    "14:leaf=0.057425\n" \
    "booster[66]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<11.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00489982\n" \
    "8:leaf=-0.0575905\n" \
    "4:[18<3.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.104314\n" \
    "10:leaf=0.0321664\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[29<1.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.156013\n" \
    "12:leaf=0.104943\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.100684\n" \
    "14:leaf=0.0821484\n" \
    "booster[67]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[7<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0220651\n" \
    "8:leaf=0.0490365\n" \
    "4:[9<191] yes=9,no=10,missing=9\n" \
    "9:leaf=0.018197\n" \
    "10:leaf=0.112872\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0821681\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.142058\n" \
    "12:leaf=0.0125855\n" \
    "booster[68]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0259294\n" \
    "8:leaf=0.056373\n" \
    "4:[22<12.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0619615\n" \
    "10:leaf=-0.123624\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[26<10.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.110139\n" \
    "12:leaf=0.0308484\n" \
    "6:[15<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.241127\n" \
    "14:leaf=0.0564164\n" \
    "booster[69]:\n" \
    "0:[6<0.5] yes=1,no=2,missing=1\n" \
    "1:[13<300000] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0394713\n" \
    "8:leaf=0.0389665\n" \
    "4:[17<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.102838\n" \
    "10:leaf=-0.0232691\n" \
    "2:[3<0.5] yes=5,no=6,missing=5\n" \
    "5:[13<1.57374e+09] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.061339\n" \
    "12:leaf=0.106549\n" \
    "6:[23<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.0584239\n" \
    "14:leaf=-0.0897886\n" \
    "booster[70]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0218734\n" \
    "8:leaf=0.0309512\n" \
    "4:[18<3.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.104148\n" \
    "10:leaf=0.0325053\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[27<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.14445\n" \
    "12:leaf=0.0376067\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0950668\n" \
    "14:leaf=0.0794116\n" \
    "booster[71]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<1.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.018392\n" \
    "8:leaf=0.0574627\n" \
    "4:[19<1.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0788654\n" \
    "10:leaf=-0.176587\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0777306\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.139922\n" \
    "12:leaf=0.0122301\n" \
    "booster[72]:\n" \
    "0:[5<244.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[10<0.5] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0149239\n" \
    "6:leaf=0.0916867\n" \
    "4:[13<89.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.127824\n" \
    "8:leaf=0.0210556\n" \
    "2:leaf=-0.103131\n" \
    "booster[73]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[29<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0287104\n" \
    "8:leaf=0.056487\n" \
    "4:[3<135.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0497279\n" \
    "10:leaf=-0.0189289\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0757185\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.135527\n" \
    "12:leaf=0.0123333\n" \
    "booster[74]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<11.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00483803\n" \
    "8:leaf=-0.0559068\n" \
    "4:[18<3.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.103366\n" \
    "10:leaf=0.0253471\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[27<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.141761\n" \
    "12:leaf=0.0372007\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0891182\n" \
    "14:leaf=0.0782826\n" \
    "booster[75]:\n" \
    "0:[10<0.5] yes=1,no=2,missing=1\n" \
    "1:[24<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0411394\n" \
    "8:leaf=0.0868277\n" \
    "4:[14<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0177132\n" \
    "10:leaf=0.057769\n" \
    "2:[22<25.5] yes=5,no=6,missing=5\n" \
    "5:[9<77.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0405914\n" \
    "12:leaf=0.113104\n" \
    "6:leaf=-0.100804\n" \
    "booster[76]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[13<2.14748e+09] yes=3,no=4,missing=3\n" \
    "3:[11<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0227867\n" \
    "8:leaf=0.0487214\n" \
    "4:[17<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.102406\n" \
    "10:leaf=-0.0186488\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0714873\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.133341\n" \
    "12:leaf=0.0157439\n" \
    "booster[77]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[23<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.010072\n" \
    "8:leaf=0.0394782\n" \
    "4:[31<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0950229\n" \
    "10:leaf=0.103856\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[27<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.138219\n" \
    "12:leaf=0.0358118\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0840385\n" \
    "14:leaf=0.0726058\n" \
    "booster[78]:\n" \
    "0:[5<244.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0175072\n" \
    "6:leaf=0.0551913\n" \
    "4:[13<89.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.12094\n" \
    "8:leaf=0.0172873\n" \
    "2:leaf=-0.101425\n" \
    "booster[79]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[9<169.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0217718\n" \
    "8:leaf=0.0761256\n" \
    "4:[29<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0324489\n" \
    "10:leaf=0.0741672\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[26<9] yes=11,no=12,missing=11\n" \
    "11:leaf=0.104406\n" \
    "12:leaf=0.0203818\n" \
    "6:[7<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.219666\n" \
    "14:leaf=0.0637427\n" \
    "booster[80]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[6<0.5] yes=3,no=4,missing=3\n" \
    "3:[20<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0262578\n" \
    "8:leaf=0.0396838\n" \
    "4:[9<208.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0140005\n" \
    "10:leaf=0.107537\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0706244\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.130412\n" \
    "12:leaf=0.0166615\n" \
    "booster[81]:\n" \
    "0:[8<0.5] yes=1,no=2,missing=1\n" \
    "1:[3<0.5] yes=3,no=4,missing=3\n" \
    "3:[9<128] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.063871\n" \
    "8:leaf=0.379256\n" \
    "4:[13<5.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.00693977\n" \
    "10:leaf=0.0473709\n" \
    "2:[17<2.5] yes=5,no=6,missing=5\n" \
    "5:[12<70.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.102674\n" \
    "12:leaf=0.00531197\n" \
    "6:leaf=-0.0536043\n" \
    "booster[82]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[32<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0123955\n" \
    "8:leaf=0.0542327\n" \
    "4:[15<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0390382\n" \
    "10:leaf=0.199545\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[27<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.13677\n" \
    "12:leaf=0.0371445\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0812196\n" \
    "14:leaf=0.0675654\n" \
    "booster[83]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[22<9.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.000239846\n" \
    "8:leaf=0.0998197\n" \
    "4:[30<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0540623\n" \
    "10:leaf=0.109076\n" \
    "2:[2<25] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0658296\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.127455\n" \
    "12:leaf=0.0160315\n" \
    "booster[84]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[16<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0296096\n" \
    "8:leaf=0.0476179\n" \
    "4:[0<184] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.00524646\n" \
    "10:leaf=0.0967078\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[26<10.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.101137\n" \
    "12:leaf=0.0208854\n" \
    "6:[7<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.197294\n" \
    "14:leaf=0.061679\n" \
    "booster[85]:\n" \
    "0:[7<0.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[0<184] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0251171\n" \
    "8:leaf=0.0492281\n" \
    "4:[3<132.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0537757\n" \
    "10:leaf=-0.121879\n" \
    "2:[29<0.5] yes=5,no=6,missing=5\n" \
    "5:[10<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0510217\n" \
    "12:leaf=0.108793\n" \
    "6:[3<319.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.142741\n" \
    "14:leaf=0.00803008\n" \
    "booster[86]:\n" \
    "0:[32<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[29<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0191155\n" \
    "8:leaf=0.0242788\n" \
    "4:[17<2.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0997999\n" \
    "10:leaf=-0.0529867\n" \
    "2:[15<0.5] yes=5,no=6,missing=5\n" \
    "5:[0<7.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0616133\n" \
    "12:leaf=-0.0817019\n" \
    "6:[13<10000.5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.269308\n" \
    "14:leaf=0.112795\n" \
    "booster[87]:\n" \
    "0:[13<2.14748e+09] yes=1,no=2,missing=1\n" \
    "1:[31<0.5] yes=3,no=4,missing=3\n" \
    "3:[29<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0293051\n" \
    "8:leaf=0.0188765\n" \
    "4:[4<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0433233\n" \
    "10:leaf=0.123081\n" \
    "2:[17<0.5] yes=5,no=6,missing=5\n" \
    "5:[28<0.998932] yes=11,no=12,missing=11\n" \
    "11:leaf=0.110701\n" \
    "12:leaf=-0.0726379\n" \
    "6:[0<190.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.111085\n" \
    "14:leaf=0.104277\n" \
    "booster[88]:\n" \
    "0:[6<0.5] yes=1,no=2,missing=1\n" \
    "1:[3<176.5] yes=3,no=4,missing=3\n" \
    "3:[3<58.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.02761\n" \
    "8:leaf=0.025896\n" \
    "4:[16<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0967004\n" \
    "10:leaf=0.0578116\n" \
    "2:[9<208.5] yes=5,no=6,missing=5\n" \
    "5:[0<35.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0015784\n" \
    "12:leaf=0.0852891\n" \
    "6:[22<5] yes=13,no=14,missing=13\n" \
    "13:leaf=0.107783\n" \
    "14:leaf=-0.00806647\n" \
    "booster[89]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[23<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0105359\n" \
    "8:leaf=0.0370236\n" \
    "4:[21<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0943041\n" \
    "10:leaf=0.0759813\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[27<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.132455\n" \
    "12:leaf=0.0334097\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0821337\n" \
    "14:leaf=0.0648106\n" \
    "booster[90]:\n" \
    "0:[5<244.5] yes=1,no=2,missing=1\n" \
    "1:[15<0.5] yes=3,no=4,missing=3\n" \
    "3:[7<0.5] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0156314\n" \
    "6:leaf=0.055121\n" \
    "4:[2<44.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00530543\n" \
    "8:leaf=0.0869189\n" \
    "2:leaf=-0.0997469\n" \
    "booster[91]:\n" \
    "0:[8<0.5] yes=1,no=2,missing=1\n" \
    "1:[31<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<9.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00599863\n" \
    "8:leaf=-0.0541024\n" \
    "4:[4<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0398193\n" \
    "10:leaf=0.120483\n" \
    "2:[17<2.5] yes=5,no=6,missing=5\n" \
    "5:[12<63.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.101453\n" \
    "12:leaf=0.00733755\n" \
    "6:leaf=-0.0502522\n" \
    "booster[92]:\n" \
    "0:[30<0.5] yes=1,no=2,missing=1\n" \
    "1:[8<0.5] yes=3,no=4,missing=3\n" \
    "3:[22<12.5] yes=7,no=8,missing=7\n" \
    "7:leaf=0.00426081\n" \
    "8:leaf=-0.0497346\n" \
    "4:[1<4609] yes=9,no=10,missing=9\n" \
    "9:leaf=0.101017\n" \
    "10:leaf=0.00897012\n" \
    "2:[3<166] yes=5,no=6,missing=5\n" \
    "5:[27<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.1304\n" \
    "12:leaf=0.0347595\n" \
    "6:[13<1.07374e+09] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.0756953\n" \
    "14:leaf=0.0634362\n" \
    "booster[93]:\n" \
    "0:[29<1.5] yes=1,no=2,missing=1\n" \
    "1:[20<0.5] yes=3,no=4,missing=3\n" \
    "3:[13<2.12374e+09] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0258423\n" \
    "8:leaf=0.0340187\n" \
    "4:[22<12.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0553683\n" \
    "10:leaf=-0.132679\n" \
    "2:[19<1.5] yes=5,no=6,missing=5\n" \
    "5:[21<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0516629\n" \
    "12:leaf=0.157199\n" \
    "6:[7<0.5] yes=13,no=14,missing=13\n" \
    "13:leaf=-0.18799\n" \
    "14:leaf=0.0536264\n" \
    "booster[94]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[10<0.5] yes=3,no=4,missing=3\n" \
    "3:[29<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0208588\n" \
    "8:leaf=0.0226193\n" \
    "4:[22<25.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.104021\n" \
    "10:leaf=-0.095967\n" \
    "2:[4<0.5] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0346877\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.122403\n" \
    "12:leaf=0.0123738\n" \
    "booster[95]:\n" \
    "0:[3<321.5] yes=1,no=2,missing=1\n" \
    "1:[5<276.5] yes=3,no=4,missing=3\n" \
    "3:[3<25.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0274748\n" \
    "8:leaf=0.0161742\n" \
    "4:leaf=-0.0993422\n" \
    "2:[2<301] yes=5,no=6,missing=5\n" \
    "5:[3<336] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.107725\n" \
    "10:leaf=0.0529978\n" \
    "6:[14<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.115247\n" \
    "12:leaf=-0.0409492\n" \
    "booster[96]:\n" \
    "0:[32<0.5] yes=1,no=2,missing=1\n" \
    "1:[16<0.5] yes=3,no=4,missing=3\n" \
    "3:[30<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.011377\n" \
    "8:leaf=0.114486\n" \
    "4:[22<9] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0977286\n" \
    "10:leaf=-0.0189512\n" \
    "2:[15<0.5] yes=5,no=6,missing=5\n" \
    "5:[24<1.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.0464986\n" \
    "12:leaf=0.056123\n" \
    "6:[13<1.13889e+07] yes=13,no=14,missing=13\n" \
    "13:leaf=0.234311\n" \
    "14:leaf=0.0920195\n" \
    "booster[97]:\n" \
    "0:[31<0.5] yes=1,no=2,missing=1\n" \
    "1:[23<0.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0100311\n" \
    "8:leaf=0.0352796\n" \
    "4:[30<0.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0885346\n" \
    "10:leaf=0.100167\n" \
    "2:[4<0.5] yes=5,no=6,missing=5\n" \
    "5:leaf=-0.0314294\n" \
    "6:[3<153.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.119606\n" \
    "12:leaf=0.0147311\n" \
    "booster[98]:\n" \
    "0:[8<0.5] yes=1,no=2,missing=1\n" \
    "1:[6<0.5] yes=3,no=4,missing=3\n" \
    "3:[2<360.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.0371197\n" \
    "8:leaf=0.00718367\n" \
    "4:[9<208.5] yes=9,no=10,missing=9\n" \
    "9:leaf=0.0129771\n" \
    "10:leaf=0.101858\n" \
    "2:[18<3.5] yes=5,no=6,missing=5\n" \
    "5:leaf=0.100524\n" \
    "6:[0<37.5] yes=11,no=12,missing=11\n" \
    "11:leaf=0.0598019\n" \
    "12:leaf=-0.111931\n" \
    "booster[99]:\n" \
    "0:[3<320.5] yes=1,no=2,missing=1\n" \
    "1:[5<276.5] yes=3,no=4,missing=3\n" \
    "3:[15<0.5] yes=7,no=8,missing=7\n" \
    "7:leaf=-0.00442813\n" \
    "8:leaf=0.0369311\n" \
    "4:leaf=-0.0982486\n" \
    "2:[2<301] yes=5,no=6,missing=5\n" \
    "5:[4<1.5] yes=9,no=10,missing=9\n" \
    "9:leaf=-0.0598763\n" \
    "10:leaf=0.0769947\n" \
    "6:[14<0.5] yes=11,no=12,missing=11\n" \
    "11:leaf=-0.11306\n" \
    "12:leaf=-0.0382843\n";

#endif  //XGB_CONFIG_H

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
