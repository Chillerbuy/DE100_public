class Life_DrawText3D {

		idd = 555558;
		onLoad = "uiNamespace setVariable['Life_DrawText3D',_this select 0]";
		duration = 1e14;
		movingEnabled = 1;
		enableSimulation = 1;

		class controlsBackground {
			class StructuredText: Life_RscStructuredText
			{
				idc = 1;
				x = 0;
				y = 0;
				w = 1;
				h = 1;
			};

			class StructuredText2: StructuredText {idc=2;};
			class StructuredText3: StructuredText {idc=3;};
			class StructuredText4: StructuredText {idc=4;};
			class StructuredText5: StructuredText {idc=5;};
			class StructuredText6: StructuredText {idc=6;};
			class StructuredText7: StructuredText {idc=7;};
			class StructuredText8: StructuredText {idc=8;};
			class StructuredText9: StructuredText {idc=9;};
			class StructuredText10: StructuredText {idc=10;};
			class StructuredText11: StructuredText {idc=11;};
			class StructuredText12: StructuredText {idc=12;};
			class StructuredText13: StructuredText {idc=13;};
			class StructuredText14: StructuredText {idc=14;};
			class StructuredText15: StructuredText {idc=15;};
			class StructuredText16: StructuredText {idc=16;};
			class StructuredText17: StructuredText {idc=17;};
			class StructuredText18: StructuredText {idc=18;};
			class StructuredText19: StructuredText {idc=19;};
			class StructuredText20: StructuredText {idc=20;};
			class StructuredText21: StructuredText {idc=21;};
			class StructuredText22: StructuredText {idc=22;};
			class StructuredText23: StructuredText {idc=23;};
			class StructuredText24: StructuredText {idc=24;};
			class StructuredText25: StructuredText {idc=25;};
			class StructuredText26: StructuredText {idc=26;};
			class StructuredText27: StructuredText {idc=27;};
			class StructuredText28: StructuredText {idc=28;};
			class StructuredText29: StructuredText {idc=29;};
			class StructuredText30: StructuredText {idc=30;};
			class StructuredText31: StructuredText {idc=31;};
			class StructuredText32: StructuredText {idc=32;};
			class StructuredText33: StructuredText {idc=33;};
			class StructuredText34: StructuredText {idc=34;};
			class StructuredText35: StructuredText {idc=35;};
			class StructuredText36: StructuredText {idc=36;};
			class StructuredText37: StructuredText {idc=37;};
			class StructuredText38: StructuredText {idc=38;};
			class StructuredText39: StructuredText {idc=39;};
			class StructuredText40: StructuredText {idc=40;};
			class StructuredText41: StructuredText {idc=41;};
			class StructuredText42: StructuredText {idc=42;};
			class StructuredText43: StructuredText {idc=43;};
			class StructuredText44: StructuredText {idc=44;};
			class StructuredText45: StructuredText {idc=45;};
			class StructuredText46: StructuredText {idc=46;};
			class StructuredText47: StructuredText {idc=47;};
			class StructuredText48: StructuredText {idc=48;};
			class StructuredText49: StructuredText {idc=49;};
			class StructuredText50: StructuredText {idc=50;};
			class StructuredText51: StructuredText {idc=51;};
			class StructuredText52: StructuredText {idc=52;};
			class StructuredText53: StructuredText {idc=53;};
			class StructuredText54: StructuredText {idc=54;};
			class StructuredText55: StructuredText {idc=55;};
			class StructuredText56: StructuredText {idc=56;};
			class StructuredText57: StructuredText {idc=57;};
			class StructuredText58: StructuredText {idc=58;};
			class StructuredText59: StructuredText {idc=59;};
			class StructuredText60: StructuredText {idc=60;};
			class StructuredText61: StructuredText {idc=61;};
			class StructuredText62: StructuredText {idc=62;};
			class StructuredText63: StructuredText {idc=63;};
			class StructuredText64: StructuredText {idc=64;};
			class StructuredText65: StructuredText {idc=65;};
			class StructuredText66: StructuredText {idc=66;};
			class StructuredText67: StructuredText {idc=67;};
			class StructuredText68: StructuredText {idc=68;};
			class StructuredText69: StructuredText {idc=69;};
			class StructuredText70: StructuredText {idc=70;};
			class StructuredText71: StructuredText {idc=71;};
			class StructuredText72: StructuredText {idc=72;};
			class StructuredText73: StructuredText {idc=73;};
			class StructuredText74: StructuredText {idc=74;};
			class StructuredText75: StructuredText {idc=75;};
			class StructuredText76: StructuredText {idc=76;};
			class StructuredText77: StructuredText {idc=77;};
			class StructuredText78: StructuredText {idc=78;};
			class StructuredText79: StructuredText {idc=79;};
			class StructuredText80: StructuredText {idc=80;};
			class StructuredText81: StructuredText {idc=81;};
			class StructuredText82: StructuredText {idc=82;};
			class StructuredText83: StructuredText {idc=83;};
			class StructuredText84: StructuredText {idc=84;};
			class StructuredText85: StructuredText {idc=85;};
			class StructuredText86: StructuredText {idc=86;};
			class StructuredText87: StructuredText {idc=87;};
			class StructuredText88: StructuredText {idc=88;};
			class StructuredText89: StructuredText {idc=89;};
			class StructuredText90: StructuredText {idc=90;};
			class StructuredText91: StructuredText {idc=91;};
			class StructuredText92: StructuredText {idc=92;};
			class StructuredText93: StructuredText {idc=93;};
			class StructuredText94: StructuredText {idc=94;};
			class StructuredText95: StructuredText {idc=95;};
			class StructuredText96: StructuredText {idc=96;};
			class StructuredText97: StructuredText {idc=97;};
			class StructuredText98: StructuredText {idc=98;};
			class StructuredText99: StructuredText {idc=99;};
			class StructuredText100: StructuredText {idc=100;};
			class StructuredText101: StructuredText {idc=101;};
			class StructuredText102: StructuredText {idc=102;};
			class StructuredText103: StructuredText {idc=103;};
			class StructuredText104: StructuredText {idc=104;};
			class StructuredText105: StructuredText {idc=105;};
			class StructuredText106: StructuredText {idc=106;};
			class StructuredText107: StructuredText {idc=107;};
			class StructuredText108: StructuredText {idc=108;};
			class StructuredText109: StructuredText {idc=109;};
			class StructuredText110: StructuredText {idc=110;};
			class StructuredText111: StructuredText {idc=111;};
			class StructuredText112: StructuredText {idc=112;};
			class StructuredText113: StructuredText {idc=113;};
			class StructuredText114: StructuredText {idc=114;};
			class StructuredText115: StructuredText {idc=115;};
			class StructuredText116: StructuredText {idc=116;};
			class StructuredText117: StructuredText {idc=117;};
			class StructuredText118: StructuredText {idc=118;};
			class StructuredText119: StructuredText {idc=119;};
			class StructuredText120: StructuredText {idc=120;};
			class StructuredText121: StructuredText {idc=121;};
			class StructuredText122: StructuredText {idc=122;};
			class StructuredText123: StructuredText {idc=123;};
			class StructuredText124: StructuredText {idc=124;};
			class StructuredText125: StructuredText {idc=125;};
			class StructuredText126: StructuredText {idc=126;};
			class StructuredText127: StructuredText {idc=127;};
			class StructuredText128: StructuredText {idc=128;};
			class StructuredText129: StructuredText {idc=129;};
			class StructuredText130: StructuredText {idc=130;};
			class StructuredText131: StructuredText {idc=131;};
			class StructuredText132: StructuredText {idc=132;};
			class StructuredText133: StructuredText {idc=133;};
			class StructuredText134: StructuredText {idc=134;};
			class StructuredText135: StructuredText {idc=135;};
			class StructuredText136: StructuredText {idc=136;};
			class StructuredText137: StructuredText {idc=137;};
			class StructuredText138: StructuredText {idc=138;};
			class StructuredText139: StructuredText {idc=139;};
			class StructuredText140: StructuredText {idc=140;};
			class StructuredText141: StructuredText {idc=141;};
			class StructuredText142: StructuredText {idc=142;};
			class StructuredText143: StructuredText {idc=143;};
			class StructuredText144: StructuredText {idc=144;};
			class StructuredText145: StructuredText {idc=145;};
			class StructuredText146: StructuredText {idc=146;};
			class StructuredText147: StructuredText {idc=147;};
			class StructuredText148: StructuredText {idc=148;};
			class StructuredText149: StructuredText {idc=149;};
			class StructuredText150: StructuredText {idc=150;};
			class StructuredText151: StructuredText {idc=151;};
			class StructuredText152: StructuredText {idc=152;};
			class StructuredText153: StructuredText {idc=153;};
			class StructuredText154: StructuredText {idc=154;};
			class StructuredText155: StructuredText {idc=155;};
			class StructuredText156: StructuredText {idc=156;};
			class StructuredText157: StructuredText {idc=157;};
			class StructuredText158: StructuredText {idc=158;};
			class StructuredText159: StructuredText {idc=159;};
			class StructuredText160: StructuredText {idc=160;};
			class StructuredText161: StructuredText {idc=161;};
			class StructuredText162: StructuredText {idc=162;};
			class StructuredText163: StructuredText {idc=163;};
			class StructuredText164: StructuredText {idc=164;};
			class StructuredText165: StructuredText {idc=165;};
			class StructuredText166: StructuredText {idc=166;};
			class StructuredText167: StructuredText {idc=167;};
			class StructuredText168: StructuredText {idc=168;};
			class StructuredText169: StructuredText {idc=169;};
			class StructuredText170: StructuredText {idc=170;};
			class StructuredText171: StructuredText {idc=171;};
			class StructuredText172: StructuredText {idc=172;};
			class StructuredText173: StructuredText {idc=173;};
			class StructuredText174: StructuredText {idc=174;};
			class StructuredText175: StructuredText {idc=175;};
			class StructuredText176: StructuredText {idc=176;};
			class StructuredText177: StructuredText {idc=177;};
			class StructuredText178: StructuredText {idc=178;};
			class StructuredText179: StructuredText {idc=179;};
			class StructuredText180: StructuredText {idc=180;};
			class StructuredText181: StructuredText {idc=181;};
			class StructuredText182: StructuredText {idc=182;};
			class StructuredText183: StructuredText {idc=183;};
			class StructuredText184: StructuredText {idc=184;};
			class StructuredText185: StructuredText {idc=185;};
			class StructuredText186: StructuredText {idc=186;};
			class StructuredText187: StructuredText {idc=187;};
			class StructuredText188: StructuredText {idc=188;};
			class StructuredText189: StructuredText {idc=189;};
			class StructuredText190: StructuredText {idc=190;};
			class StructuredText191: StructuredText {idc=191;};
			class StructuredText192: StructuredText {idc=192;};
			class StructuredText193: StructuredText {idc=193;};
			class StructuredText194: StructuredText {idc=194;};
			class StructuredText195: StructuredText {idc=195;};
			class StructuredText196: StructuredText {idc=196;};
			class StructuredText197: StructuredText {idc=197;};
			class StructuredText198: StructuredText {idc=198;};
			class StructuredText199: StructuredText {idc=199;};
			class StructuredText200: StructuredText {idc=200;};
			class StructuredText201: StructuredText {idc=201;};
			class StructuredText202: StructuredText {idc=202;};
			class StructuredText203: StructuredText {idc=203;};
			class StructuredText204: StructuredText {idc=204;};
			class StructuredText205: StructuredText {idc=205;};
			class StructuredText206: StructuredText {idc=206;};
			class StructuredText207: StructuredText {idc=207;};
			class StructuredText208: StructuredText {idc=208;};
			class StructuredText209: StructuredText {idc=209;};
			class StructuredText210: StructuredText {idc=210;};
			class StructuredText211: StructuredText {idc=211;};
			class StructuredText212: StructuredText {idc=212;};
			class StructuredText213: StructuredText {idc=213;};
			class StructuredText214: StructuredText {idc=214;};
			class StructuredText215: StructuredText {idc=215;};
			class StructuredText216: StructuredText {idc=216;};
			class StructuredText217: StructuredText {idc=217;};
			class StructuredText218: StructuredText {idc=218;};
			class StructuredText219: StructuredText {idc=219;};
			class StructuredText220: StructuredText {idc=220;};
			class StructuredText221: StructuredText {idc=221;};
			class StructuredText222: StructuredText {idc=222;};
			class StructuredText223: StructuredText {idc=223;};
			class StructuredText224: StructuredText {idc=224;};
			class StructuredText225: StructuredText {idc=225;};
			class StructuredText226: StructuredText {idc=226;};
			class StructuredText227: StructuredText {idc=227;};
			class StructuredText228: StructuredText {idc=228;};
			class StructuredText229: StructuredText {idc=229;};
			class StructuredText230: StructuredText {idc=230;};
			class StructuredText231: StructuredText {idc=231;};
			class StructuredText232: StructuredText {idc=232;};
			class StructuredText233: StructuredText {idc=233;};
			class StructuredText234: StructuredText {idc=234;};
			class StructuredText235: StructuredText {idc=235;};
			class StructuredText236: StructuredText {idc=236;};
			class StructuredText237: StructuredText {idc=237;};
			class StructuredText238: StructuredText {idc=238;};
			class StructuredText239: StructuredText {idc=239;};
			class StructuredText240: StructuredText {idc=240;};
			class StructuredText241: StructuredText {idc=241;};
			class StructuredText242: StructuredText {idc=242;};
			class StructuredText243: StructuredText {idc=243;};
			class StructuredText244: StructuredText {idc=244;};
			class StructuredText245: StructuredText {idc=245;};
			class StructuredText246: StructuredText {idc=246;};
			class StructuredText247: StructuredText {idc=247;};
			class StructuredText248: StructuredText {idc=248;};
			class StructuredText249: StructuredText {idc=249;};
			class StructuredText250: StructuredText {idc=250;};
			class StructuredText251: StructuredText {idc=251;};
			class StructuredText252: StructuredText {idc=252;};
			class StructuredText253: StructuredText {idc=253;};
			class StructuredText254: StructuredText {idc=254;};
			class StructuredText255: StructuredText {idc=255;};
			class StructuredText256: StructuredText {idc=256;};
			class StructuredText257: StructuredText {idc=257;};
			class StructuredText258: StructuredText {idc=258;};
			class StructuredText259: StructuredText {idc=259;};
			class StructuredText260: StructuredText {idc=260;};
			class StructuredText261: StructuredText {idc=261;};
			class StructuredText262: StructuredText {idc=262;};
			class StructuredText263: StructuredText {idc=263;};
			class StructuredText264: StructuredText {idc=264;};
			class StructuredText265: StructuredText {idc=265;};
			class StructuredText266: StructuredText {idc=266;};
			class StructuredText267: StructuredText {idc=267;};
			class StructuredText268: StructuredText {idc=268;};
			class StructuredText269: StructuredText {idc=269;};
			class StructuredText270: StructuredText {idc=270;};
			class StructuredText271: StructuredText {idc=271;};
			class StructuredText272: StructuredText {idc=272;};
			class StructuredText273: StructuredText {idc=273;};
			class StructuredText274: StructuredText {idc=274;};
			class StructuredText275: StructuredText {idc=275;};
			class StructuredText276: StructuredText {idc=276;};
			class StructuredText277: StructuredText {idc=277;};
			class StructuredText278: StructuredText {idc=278;};
			class StructuredText279: StructuredText {idc=279;};
			class StructuredText280: StructuredText {idc=280;};
			class StructuredText281: StructuredText {idc=281;};
			class StructuredText282: StructuredText {idc=282;};
			class StructuredText283: StructuredText {idc=283;};
			class StructuredText284: StructuredText {idc=284;};
			class StructuredText285: StructuredText {idc=285;};
			class StructuredText286: StructuredText {idc=286;};
			class StructuredText287: StructuredText {idc=287;};
			class StructuredText288: StructuredText {idc=288;};
			class StructuredText289: StructuredText {idc=289;};
			class StructuredText290: StructuredText {idc=290;};
			class StructuredText291: StructuredText {idc=291;};
			class StructuredText292: StructuredText {idc=292;};
			class StructuredText293: StructuredText {idc=293;};
			class StructuredText294: StructuredText {idc=294;};
			class StructuredText295: StructuredText {idc=295;};
			class StructuredText296: StructuredText {idc=296;};
			class StructuredText297: StructuredText {idc=297;};
			class StructuredText298: StructuredText {idc=298;};
			class StructuredText299: StructuredText {idc=299;};
			class StructuredText300: StructuredText {idc=300;};
			class StructuredText301: StructuredText {idc=301;};
			class StructuredText302: StructuredText {idc=302;};
			class StructuredText303: StructuredText {idc=303;};
			class StructuredText304: StructuredText {idc=304;};
			class StructuredText305: StructuredText {idc=305;};
			class StructuredText306: StructuredText {idc=306;};
			class StructuredText307: StructuredText {idc=307;};
			class StructuredText308: StructuredText {idc=308;};
			class StructuredText309: StructuredText {idc=309;};
			class StructuredText310: StructuredText {idc=310;};
			class StructuredText311: StructuredText {idc=311;};
			class StructuredText312: StructuredText {idc=312;};
			class StructuredText313: StructuredText {idc=313;};
			class StructuredText314: StructuredText {idc=314;};
			class StructuredText315: StructuredText {idc=315;};
			class StructuredText316: StructuredText {idc=316;};
			class StructuredText317: StructuredText {idc=317;};
			class StructuredText318: StructuredText {idc=318;};
			class StructuredText319: StructuredText {idc=319;};
			class StructuredText320: StructuredText {idc=320;};
			class StructuredText321: StructuredText {idc=321;};
			class StructuredText322: StructuredText {idc=322;};
			class StructuredText323: StructuredText {idc=323;};
			class StructuredText324: StructuredText {idc=324;};
			class StructuredText325: StructuredText {idc=325;};
			class StructuredText326: StructuredText {idc=326;};
			class StructuredText327: StructuredText {idc=327;};
			class StructuredText328: StructuredText {idc=328;};
			class StructuredText329: StructuredText {idc=329;};
			class StructuredText330: StructuredText {idc=330;};
			class StructuredText331: StructuredText {idc=331;};
			class StructuredText332: StructuredText {idc=332;};
			class StructuredText333: StructuredText {idc=333;};
			class StructuredText334: StructuredText {idc=334;};
			class StructuredText335: StructuredText {idc=335;};
			class StructuredText336: StructuredText {idc=336;};
			class StructuredText337: StructuredText {idc=337;};
			class StructuredText338: StructuredText {idc=338;};
			class StructuredText339: StructuredText {idc=339;};
			class StructuredText340: StructuredText {idc=340;};
			class StructuredText341: StructuredText {idc=341;};
			class StructuredText342: StructuredText {idc=342;};
			class StructuredText343: StructuredText {idc=343;};
			class StructuredText344: StructuredText {idc=344;};
			class StructuredText345: StructuredText {idc=345;};
			class StructuredText346: StructuredText {idc=346;};
			class StructuredText347: StructuredText {idc=347;};
			class StructuredText348: StructuredText {idc=348;};
			class StructuredText349: StructuredText {idc=349;};
			class StructuredText350: StructuredText {idc=350;};
			class StructuredText351: StructuredText {idc=351;};
			class StructuredText352: StructuredText {idc=352;};
			class StructuredText353: StructuredText {idc=353;};
			class StructuredText354: StructuredText {idc=354;};
			class StructuredText355: StructuredText {idc=355;};
			class StructuredText356: StructuredText {idc=356;};
			class StructuredText357: StructuredText {idc=357;};
			class StructuredText358: StructuredText {idc=358;};
			class StructuredText359: StructuredText {idc=359;};
			class StructuredText360: StructuredText {idc=360;};
			class StructuredText361: StructuredText {idc=361;};
			class StructuredText362: StructuredText {idc=362;};
			class StructuredText363: StructuredText {idc=363;};
			class StructuredText364: StructuredText {idc=364;};
			class StructuredText365: StructuredText {idc=365;};
			class StructuredText366: StructuredText {idc=366;};
			class StructuredText367: StructuredText {idc=367;};
			class StructuredText368: StructuredText {idc=368;};
			class StructuredText369: StructuredText {idc=369;};
			class StructuredText370: StructuredText {idc=370;};
			class StructuredText371: StructuredText {idc=371;};
			class StructuredText372: StructuredText {idc=372;};
			class StructuredText373: StructuredText {idc=373;};
			class StructuredText374: StructuredText {idc=374;};
			class StructuredText375: StructuredText {idc=375;};
			class StructuredText376: StructuredText {idc=376;};
			class StructuredText377: StructuredText {idc=377;};
			class StructuredText378: StructuredText {idc=378;};
			class StructuredText379: StructuredText {idc=379;};
			class StructuredText380: StructuredText {idc=380;};
			class StructuredText381: StructuredText {idc=381;};
			class StructuredText382: StructuredText {idc=382;};
			class StructuredText383: StructuredText {idc=383;};
			class StructuredText384: StructuredText {idc=384;};
			class StructuredText385: StructuredText {idc=385;};
			class StructuredText386: StructuredText {idc=386;};
			class StructuredText387: StructuredText {idc=387;};
			class StructuredText388: StructuredText {idc=388;};
			class StructuredText389: StructuredText {idc=389;};
			class StructuredText390: StructuredText {idc=390;};
			class StructuredText391: StructuredText {idc=391;};
			class StructuredText392: StructuredText {idc=392;};
			class StructuredText393: StructuredText {idc=393;};
			class StructuredText394: StructuredText {idc=394;};
			class StructuredText395: StructuredText {idc=395;};
			class StructuredText396: StructuredText {idc=396;};
			class StructuredText397: StructuredText {idc=397;};
			class StructuredText398: StructuredText {idc=398;};
			class StructuredText399: StructuredText {idc=399;};
			class StructuredText400: StructuredText {idc=400;};
			class StructuredText401: StructuredText {idc=401;};
			class StructuredText402: StructuredText {idc=402;};
			class StructuredText403: StructuredText {idc=403;};
			class StructuredText404: StructuredText {idc=404;};
			class StructuredText405: StructuredText {idc=405;};
			class StructuredText406: StructuredText {idc=406;};
			class StructuredText407: StructuredText {idc=407;};
			class StructuredText408: StructuredText {idc=408;};
			class StructuredText409: StructuredText {idc=409;};
			class StructuredText410: StructuredText {idc=410;};
			class StructuredText411: StructuredText {idc=411;};
			class StructuredText412: StructuredText {idc=412;};
			class StructuredText413: StructuredText {idc=413;};
			class StructuredText414: StructuredText {idc=414;};
			class StructuredText415: StructuredText {idc=415;};
			class StructuredText416: StructuredText {idc=416;};
			class StructuredText417: StructuredText {idc=417;};
			class StructuredText418: StructuredText {idc=418;};
			class StructuredText419: StructuredText {idc=419;};
			class StructuredText420: StructuredText {idc=420;};
			class StructuredText421: StructuredText {idc=421;};
			class StructuredText422: StructuredText {idc=422;};
			class StructuredText423: StructuredText {idc=423;};
			class StructuredText424: StructuredText {idc=424;};
			class StructuredText425: StructuredText {idc=425;};
			class StructuredText426: StructuredText {idc=426;};
			class StructuredText427: StructuredText {idc=427;};
			class StructuredText428: StructuredText {idc=428;};
			class StructuredText429: StructuredText {idc=429;};
			class StructuredText430: StructuredText {idc=430;};
			class StructuredText431: StructuredText {idc=431;};
			class StructuredText432: StructuredText {idc=432;};
			class StructuredText433: StructuredText {idc=433;};
			class StructuredText434: StructuredText {idc=434;};
			class StructuredText435: StructuredText {idc=435;};
			class StructuredText436: StructuredText {idc=436;};
			class StructuredText437: StructuredText {idc=437;};
			class StructuredText438: StructuredText {idc=438;};
			class StructuredText439: StructuredText {idc=439;};
			class StructuredText440: StructuredText {idc=440;};
			class StructuredText441: StructuredText {idc=441;};
			class StructuredText442: StructuredText {idc=442;};
			class StructuredText443: StructuredText {idc=443;};
			class StructuredText444: StructuredText {idc=444;};
			class StructuredText445: StructuredText {idc=445;};
			class StructuredText446: StructuredText {idc=446;};
			class StructuredText447: StructuredText {idc=447;};
			class StructuredText448: StructuredText {idc=448;};
			class StructuredText449: StructuredText {idc=449;};
			class StructuredText450: StructuredText {idc=450;};
			class StructuredText451: StructuredText {idc=451;};
			class StructuredText452: StructuredText {idc=452;};
			class StructuredText453: StructuredText {idc=453;};
			class StructuredText454: StructuredText {idc=454;};
			class StructuredText455: StructuredText {idc=455;};
			class StructuredText456: StructuredText {idc=456;};
			class StructuredText457: StructuredText {idc=457;};
			class StructuredText458: StructuredText {idc=458;};
			class StructuredText459: StructuredText {idc=459;};
			class StructuredText460: StructuredText {idc=460;};
			class StructuredText461: StructuredText {idc=461;};
			class StructuredText462: StructuredText {idc=462;};
			class StructuredText463: StructuredText {idc=463;};
			class StructuredText464: StructuredText {idc=464;};
			class StructuredText465: StructuredText {idc=465;};
			class StructuredText466: StructuredText {idc=466;};
			class StructuredText467: StructuredText {idc=467;};
			class StructuredText468: StructuredText {idc=468;};
			class StructuredText469: StructuredText {idc=469;};
			class StructuredText470: StructuredText {idc=470;};
			class StructuredText471: StructuredText {idc=471;};
			class StructuredText472: StructuredText {idc=472;};
			class StructuredText473: StructuredText {idc=473;};
			class StructuredText474: StructuredText {idc=474;};
			class StructuredText475: StructuredText {idc=475;};
			class StructuredText476: StructuredText {idc=476;};
			class StructuredText477: StructuredText {idc=477;};
			class StructuredText478: StructuredText {idc=478;};
			class StructuredText479: StructuredText {idc=479;};
			class StructuredText480: StructuredText {idc=480;};
			class StructuredText481: StructuredText {idc=481;};
			class StructuredText482: StructuredText {idc=482;};
			class StructuredText483: StructuredText {idc=483;};
			class StructuredText484: StructuredText {idc=484;};
			class StructuredText485: StructuredText {idc=485;};
			class StructuredText486: StructuredText {idc=486;};
			class StructuredText487: StructuredText {idc=487;};
			class StructuredText488: StructuredText {idc=488;};
			class StructuredText489: StructuredText {idc=489;};
			class StructuredText490: StructuredText {idc=490;};
			class StructuredText491: StructuredText {idc=491;};
			class StructuredText492: StructuredText {idc=492;};
			class StructuredText493: StructuredText {idc=493;};
			class StructuredText494: StructuredText {idc=494;};
			class StructuredText495: StructuredText {idc=495;};
			class StructuredText496: StructuredText {idc=496;};
			class StructuredText497: StructuredText {idc=497;};
			class StructuredText498: StructuredText {idc=498;};
			class StructuredText499: StructuredText {idc=499;};
			class StructuredText500: StructuredText {idc=500;};
		};
	};	