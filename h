{
	"boxes" : [ 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "Link to video:\nhttps://vimeo.com/1009688278?share=copy",
				"linecount" : 3,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-3",
				"patching_rect" : [ 42.0, 258.0, 150.0, 47.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "playlist of sounds used",
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-144",
				"patching_rect" : [ 1302.0, 33.0, 150.0, 20.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "playlist~",
				"numinlets" : 1,
				"originaltempo" : 120.0,
				"quality" : "basic",
				"numoutlets" : 5,
				"pitchcorrection" : 0,
				"followglobaltempo" : 0,
				"id" : "obj-141",
				"parameter_enable" : 0,
				"basictuning" : 440,
				"outlettype" : [ "signal", "signal", "signal", "", "dictionary" ],
				"timestretch" : [ 0 ],
				"formantcorrection" : 0,
				"clipheight" : 24.875,
				"mode" : "basic",
				"originallength" : [ 0.0, "ticks" ],
				"patching_rect" : [ 1302.0, 58.0, 302.0, 207.0 ],
				"data" : 				{
					"clips" : [ 						{
							"absolutepath" : "cricket1.mp3",
							"filename" : "cricket1.mp3",
							"filekind" : "audiofile",
							"id" : "u108010578",
							"selection" : [ 0.072874493927125, 0.068825910931174 ],
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "cricket2.mp3",
							"filename" : "cricket2.mp3",
							"filekind" : "audiofile",
							"id" : "u549010582",
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "cricket3.mp3",
							"filename" : "cricket3.mp3",
							"filekind" : "audiofile",
							"id" : "u500010586",
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "cricket4.wav",
							"filename" : "cricket4.wav",
							"filekind" : "audiofile",
							"id" : "u440010590",
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "frog1.mp3",
							"filename" : "frog1.mp3",
							"filekind" : "audiofile",
							"id" : "u675010594",
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "frog2.mp3",
							"filename" : "frog2.mp3",
							"filekind" : "audiofile",
							"id" : "u306010598",
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "frog3.mp3",
							"filename" : "frog3.mp3",
							"filekind" : "audiofile",
							"id" : "u162010602",
							"loop" : 0,
							"content_state" : 							{

							}

						}
, 						{
							"absolutepath" : "frog4.mp3",
							"filename" : "frog4.mp3",
							"filekind" : "audiofile",
							"id" : "u469010606",
							"loop" : 0,
							"content_state" : 							{

							}

						}
 ]
				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "This audio experiment layers different sounds on top of each other. Here, it plays multiple audios of different frog croaks and cricket chirps to simulate real life soundscapes. It allows you to change each sound's delay time and volume, as well as choosing which audio files to play. The sounds repeat (every second for the frog croaks and every 2 seconds for the cricket chirps) and can be adjusted as well.",
				"linecount" : 8,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-118",
				"patching_rect" : [ 42.0, 134.0, 309.0, 114.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "by Oceane Daumasson",
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-115",
				"patching_rect" : [ 42.0, 106.0, 150.0, 20.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "Nigh Sounds\nAudio Experiment",
				"linecount" : 2,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-113",
				"fontsize" : 24.0,
				"patching_rect" : [ 42.0, 40.0, 289.0, 60.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "metronome that outputs a bang every 1000 miliseconds",
				"linecount" : 4,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-109",
				"patching_rect" : [ 837.0, 277.0, 97.0, 60.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "open and choose sound file",
				"linecount" : 3,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-108",
				"patching_rect" : [ 294.0, 393.0, 62.0, 47.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "delay sound, set max delay to 10000",
				"linecount" : 4,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-106",
				"patching_rect" : [ 837.0, 502.0, 67.0, 60.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "set delay time",
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-104",
				"patching_rect" : [ 832.0, 567.0, 87.0, 20.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "output sounds",
				"linecount" : 2,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-102",
				"patching_rect" : [ 605.0, 829.0, 50.0, 33.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "gain slider to scale audio",
				"linecount" : 3,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-100",
				"patching_rect" : [ 294.0, 676.0, 68.0, 47.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "1 audio track with no delay",
				"linecount" : 3,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-97",
				"patching_rect" : [ 282.0, 544.0, 75.0, 47.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "play audio",
				"linecount" : 2,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-95",
				"patching_rect" : [ 310.0, 499.0, 39.0, 33.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "trigger for each individual sound",
				"linecount" : 2,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-92",
				"patching_rect" : [ 253.0, 350.5, 96.0, 33.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "metronome that outputs a bang every 2000 miliseconds",
				"linecount" : 4,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-90",
				"patching_rect" : [ 264.0, 277.0, 97.0, 60.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "input 1 to play only frog track",
				"linecount" : 2,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-87",
				"patching_rect" : [ 505.0, 286.0, 150.0, 33.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "input 1 to play only cricket track",
				"linecount" : 2,
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-86",
				"patching_rect" : [ 1086.0, 286.0, 150.0, 33.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "comment",
				"text" : "input 1 to play both tracks",
				"numinlets" : 1,
				"numoutlets" : 0,
				"id" : "obj-83",
				"patching_rect" : [ 993.0, 165.0, 150.0, 20.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[5]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-47",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 1335.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[5]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 100",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-48",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 1330.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-49",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 1330.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-50",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 1330.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-51",
				"outlettype" : [ "" ],
				"patching_rect" : [ 1345.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-52",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 1330.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[6]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-53",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 1229.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[6]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 900",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-54",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 1224.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-55",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 1224.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-56",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 1224.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-57",
				"outlettype" : [ "" ],
				"patching_rect" : [ 1239.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-58",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 1224.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[7]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-59",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 1127.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[7]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 600",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-60",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 1122.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-61",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 1122.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-62",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 1122.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-63",
				"outlettype" : [ "" ],
				"patching_rect" : [ 1137.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-64",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 1122.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[8]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-65",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 1024.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[8]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 350",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-66",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 1019.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-67",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 1019.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-68",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 1019.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-69",
				"outlettype" : [ "" ],
				"patching_rect" : [ 1034.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-70",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 1019.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "ezdac~",
				"numinlets" : 2,
				"numoutlets" : 0,
				"id" : "obj-71",
				"patching_rect" : [ 1127.0, 823.0, 45.0, 45.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[9]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-72",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 927.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[9]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-73",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 927.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-74",
				"outlettype" : [ "" ],
				"patching_rect" : [ 942.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-75",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 927.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-76",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 941.0, 251.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "metro 1000",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-77",
				"outlettype" : [ "bang" ],
				"patching_rect" : [ 941.0, 291.0, 69.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "number",
				"numinlets" : 1,
				"numoutlets" : 2,
				"id" : "obj-78",
				"parameter_enable" : 0,
				"outlettype" : [ "", "bang" ],
				"bgcolor" : [ 0.76078431372549, 0.223529411764706, 0.223529411764706, 1.0 ],
				"patching_rect" : [ 1023.0, 291.0, 50.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[4]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-41",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 760.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[4]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 100",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-42",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 755.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-43",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 755.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-44",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 755.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-45",
				"outlettype" : [ "" ],
				"patching_rect" : [ 770.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-46",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 755.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[3]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-35",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 654.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[3]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 900",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-36",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 649.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-37",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 649.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-38",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 649.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-39",
				"outlettype" : [ "" ],
				"patching_rect" : [ 664.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-40",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 649.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[2]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-29",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 552.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[2]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 600",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-30",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 547.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-31",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 547.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-32",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 547.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-33",
				"outlettype" : [ "" ],
				"patching_rect" : [ 562.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-34",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 547.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~[1]",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-28",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 449.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~[1]",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~[1]",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapout~ 350",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-27",
				"outlettype" : [ "signal" ],
				"patching_rect" : [ 444.0, 565.0, 72.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "tapin~ 10000",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-26",
				"outlettype" : [ "tapconnect" ],
				"patching_rect" : [ 444.0, 521.0, 78.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-23",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 444.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-24",
				"outlettype" : [ "" ],
				"patching_rect" : [ 459.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-25",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 444.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "ezdac~",
				"numinlets" : 2,
				"numoutlets" : 0,
				"id" : "obj-22",
				"patching_rect" : [ 552.0, 823.0, 45.0, 45.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "live.gain~",
				"varname" : "live.gain~",
				"numinlets" : 2,
				"numoutlets" : 5,
				"id" : "obj-21",
				"parameter_enable" : 1,
				"outlettype" : [ "signal", "signal", "", "float", "list" ],
				"lastchannelcount" : 0,
				"patching_rect" : [ 352.0, 631.0, 48.0, 136.0 ],
				"saved_attribute_attributes" : 				{
					"valueof" : 					{
						"parameter_longname" : "live.gain~",
						"parameter_mmax" : 6.0,
						"parameter_mmin" : -70.0,
						"parameter_modmode" : 3,
						"parameter_shortname" : "live.gain~",
						"parameter_type" : 0,
						"parameter_unitstyle" : 4
					}

				}

			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "sfplay~",
				"numinlets" : 2,
				"numoutlets" : 2,
				"id" : "obj-20",
				"outlettype" : [ "signal", "bang" ],
				"patching_rect" : [ 352.0, 474.0, 47.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "message",
				"text" : "open",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-19",
				"outlettype" : [ "" ],
				"patching_rect" : [ 367.0, 385.0, 35.0, 22.0 ],
				"gradient" : 1,
				"bgcolor" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgcolor2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_type" : "gradient",
				"bgfillcolor_color1" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color2" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_color" : [ 0.419607843137255, 0.694117647058824, 0.776470588235294, 1.0 ],
				"bgfillcolor_angle" : 270.0,
				"bgfillcolor_autogradient" : 0.0,
				"bgfillcolor_proportion" : 0.5
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-11",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 352.0, 355.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "toggle",
				"numinlets" : 1,
				"numoutlets" : 1,
				"id" : "obj-9",
				"parameter_enable" : 0,
				"outlettype" : [ "int" ],
				"patching_rect" : [ 366.0, 251.0, 24.0, 24.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "newobj",
				"text" : "metro 2000",
				"numinlets" : 2,
				"numoutlets" : 1,
				"id" : "obj-7",
				"outlettype" : [ "bang" ],
				"patching_rect" : [ 366.0, 291.0, 69.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "number",
				"numinlets" : 1,
				"numoutlets" : 2,
				"id" : "obj-4",
				"parameter_enable" : 0,
				"outlettype" : [ "", "bang" ],
				"bgcolor" : [ 0.76078431372549, 0.223529411764706, 0.223529411764706, 1.0 ],
				"patching_rect" : [ 448.0, 291.0, 50.0, 22.0 ]
			}

		}
, 		{
			"box" : 			{
				"maxclass" : "number",
				"numinlets" : 1,
				"numoutlets" : 2,
				"textcolor" : [ 1.0, 1.0, 1.0, 1.0 ],
				"id" : "obj-2",
				"parameter_enable" : 0,
				"outlettype" : [ "", "bang" ],
				"bgcolor" : [ 0.501960784313725, 0.129411764705882, 0.129411764705882, 1.0 ],
				"patching_rect" : [ 788.0, 158.0, 50.0, 22.0 ]
			}

		}
 ],
	"lines" : [ 		{
			"patchline" : 			{
				"source" : [ "obj-9", 0 ],
				"destination" : [ "obj-7", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-78", 0 ],
				"destination" : [ "obj-75", 0 ],
				"order" : 4
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-78", 0 ],
				"destination" : [ "obj-70", 0 ],
				"order" : 3
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-78", 0 ],
				"destination" : [ "obj-64", 0 ],
				"order" : 2
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-78", 0 ],
				"destination" : [ "obj-58", 0 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-78", 0 ],
				"destination" : [ "obj-52", 0 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-77", 0 ],
				"destination" : [ "obj-78", 0 ],
				"midpoints" : [ 950.5, 325.0, 1020.5, 325.0, 1020.5, 286.0, 1032.5, 286.0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-76", 0 ],
				"destination" : [ "obj-77", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-75", 0 ],
				"destination" : [ "obj-73", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-74", 0 ],
				"destination" : [ "obj-73", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-73", 0 ],
				"destination" : [ "obj-72", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-72", 0 ],
				"destination" : [ "obj-71", 0 ],
				"midpoints" : [ 936.5, 794.5, 1136.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-72", 0 ],
				"destination" : [ "obj-71", 1 ],
				"midpoints" : [ 936.5, 794.5, 1162.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-70", 0 ],
				"destination" : [ "obj-68", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-7", 0 ],
				"destination" : [ "obj-4", 0 ],
				"midpoints" : [ 375.5, 325.0, 445.5, 325.0, 445.5, 286.0, 457.5, 286.0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-69", 0 ],
				"destination" : [ "obj-68", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-68", 0 ],
				"destination" : [ "obj-67", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-67", 0 ],
				"destination" : [ "obj-66", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-66", 0 ],
				"destination" : [ "obj-65", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-65", 0 ],
				"destination" : [ "obj-71", 0 ],
				"midpoints" : [ 1033.5, 794.5, 1136.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-65", 0 ],
				"destination" : [ "obj-71", 1 ],
				"midpoints" : [ 1033.5, 794.5, 1162.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-64", 0 ],
				"destination" : [ "obj-62", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-63", 0 ],
				"destination" : [ "obj-62", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-62", 0 ],
				"destination" : [ "obj-61", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-61", 0 ],
				"destination" : [ "obj-60", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-60", 0 ],
				"destination" : [ "obj-59", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-59", 0 ],
				"destination" : [ "obj-71", 0 ],
				"midpoints" : [ 1136.5, 794.5, 1136.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-59", 0 ],
				"destination" : [ "obj-71", 1 ],
				"midpoints" : [ 1136.5, 794.5, 1162.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-58", 0 ],
				"destination" : [ "obj-56", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-57", 0 ],
				"destination" : [ "obj-56", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-56", 0 ],
				"destination" : [ "obj-55", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-55", 0 ],
				"destination" : [ "obj-54", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-54", 0 ],
				"destination" : [ "obj-53", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-53", 0 ],
				"destination" : [ "obj-71", 0 ],
				"midpoints" : [ 1238.5, 794.5, 1136.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-53", 0 ],
				"destination" : [ "obj-71", 1 ],
				"midpoints" : [ 1238.5, 794.5, 1162.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-52", 0 ],
				"destination" : [ "obj-50", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-51", 0 ],
				"destination" : [ "obj-50", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-50", 0 ],
				"destination" : [ "obj-49", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-49", 0 ],
				"destination" : [ "obj-48", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-48", 0 ],
				"destination" : [ "obj-47", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-47", 0 ],
				"destination" : [ "obj-71", 0 ],
				"midpoints" : [ 1344.5, 794.5, 1136.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-47", 0 ],
				"destination" : [ "obj-71", 1 ],
				"midpoints" : [ 1344.5, 794.5, 1162.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-46", 0 ],
				"destination" : [ "obj-44", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-45", 0 ],
				"destination" : [ "obj-44", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-44", 0 ],
				"destination" : [ "obj-43", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-43", 0 ],
				"destination" : [ "obj-42", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-42", 0 ],
				"destination" : [ "obj-41", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-41", 0 ],
				"destination" : [ "obj-22", 0 ],
				"midpoints" : [ 769.5, 794.5, 561.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-41", 0 ],
				"destination" : [ "obj-22", 1 ],
				"midpoints" : [ 769.5, 794.5, 587.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-40", 0 ],
				"destination" : [ "obj-38", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-4", 0 ],
				"destination" : [ "obj-46", 0 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-4", 0 ],
				"destination" : [ "obj-40", 0 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-4", 0 ],
				"destination" : [ "obj-34", 0 ],
				"order" : 2
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-4", 0 ],
				"destination" : [ "obj-25", 0 ],
				"order" : 3
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-4", 0 ],
				"destination" : [ "obj-11", 0 ],
				"order" : 4
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-39", 0 ],
				"destination" : [ "obj-38", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-38", 0 ],
				"destination" : [ "obj-37", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-37", 0 ],
				"destination" : [ "obj-36", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-36", 0 ],
				"destination" : [ "obj-35", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-35", 0 ],
				"destination" : [ "obj-22", 0 ],
				"midpoints" : [ 663.5, 794.5, 561.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-35", 0 ],
				"destination" : [ "obj-22", 1 ],
				"midpoints" : [ 663.5, 794.5, 587.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-34", 0 ],
				"destination" : [ "obj-32", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-33", 0 ],
				"destination" : [ "obj-32", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-32", 0 ],
				"destination" : [ "obj-31", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-31", 0 ],
				"destination" : [ "obj-30", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-30", 0 ],
				"destination" : [ "obj-29", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-29", 0 ],
				"destination" : [ "obj-22", 0 ],
				"midpoints" : [ 561.5, 794.5, 561.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-29", 0 ],
				"destination" : [ "obj-22", 1 ],
				"midpoints" : [ 561.5, 794.5, 587.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-28", 0 ],
				"destination" : [ "obj-22", 0 ],
				"midpoints" : [ 458.5, 794.5, 561.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-28", 0 ],
				"destination" : [ "obj-22", 1 ],
				"midpoints" : [ 458.5, 794.5, 587.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-27", 0 ],
				"destination" : [ "obj-28", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-26", 0 ],
				"destination" : [ "obj-27", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-25", 0 ],
				"destination" : [ "obj-23", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-24", 0 ],
				"destination" : [ "obj-23", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-23", 0 ],
				"destination" : [ "obj-26", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-21", 0 ],
				"destination" : [ "obj-22", 0 ],
				"midpoints" : [ 361.5, 794.5, 561.5, 794.5 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-21", 0 ],
				"destination" : [ "obj-22", 1 ],
				"midpoints" : [ 361.5, 794.5, 587.5, 794.5 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-20", 0 ],
				"destination" : [ "obj-21", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-2", 0 ],
				"destination" : [ "obj-78", 0 ],
				"midpoints" : [ 797.5, 235.0, 1032.5, 235.0 ],
				"order" : 0
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-2", 0 ],
				"destination" : [ "obj-4", 0 ],
				"midpoints" : [ 797.5, 235.0, 457.5, 235.0 ],
				"order" : 1
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-19", 0 ],
				"destination" : [ "obj-20", 0 ]
			}

		}
, 		{
			"patchline" : 			{
				"source" : [ "obj-11", 0 ],
				"destination" : [ "obj-20", 0 ]
			}

		}
 ],
	"appversion" : 	{
		"major" : 8,
		"minor" : 6,
		"revision" : 5,
		"architecture" : "x64",
		"modernui" : 1
	}
,
	"classnamespace" : "box"
}
