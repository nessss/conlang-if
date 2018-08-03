! ==============================================================================
!   ENGLISH:  Language Definition File
!
!   Supplied for use with Inform 6 -- Release 6.12.2 -- Serial number 180611
!
!   Copyright Graham Nelson 1993-2004 and David Griffith 2012-2018
!
!   This code is licensed under either the traditional Inform license as
!   described by the DM4 or the Artistic License version 2.0.  See the
!   file COPYING in the distribution archive.
!
!   This file is automatically Included in your game file by "parserm".
!   Strictly, "parserm" includes the file named in the "language__" variable,
!   whose contents can be defined by+language_name=XXX compiler setting (with a
!   default of "english").
!
!   Define the constant DIALECT_US before including "Parser" to obtain American
!   English.
! ==============================================================================

System_file;

Message "pubup";
#Ifndef LIBRARY_ENGLISH;	! if this file is already included,
				! don't try to include it again.
Message "mugum";

! ------------------------------------------------------------------------------
!   Part I.   Preliminaries
! ------------------------------------------------------------------------------

!Constant EnglishNaturalLanguage;    ! Needed to keep old pronouns mechanism

Class   CompassDirection
  with  number 0, article "anu",
        description [;
            if (location provides compass_look && location.compass_look(self)) rtrue;
            if (self.compass_look()) rtrue;
            L__M(##Look, 7, self);
        ],
        compass_look false,
        parse_name [; return -1; ]
  has   scenery;

Object Compass "compass" has concealed;

#Ifndef WITHOUT_DIRECTIONS;
CompassDirection -> n_obj  with short_name "kurru",     door_dir n_to,
                                name 'k//' 'kurru';
CompassDirection -> s_obj  with short_name "jurru",     door_dir s_to,
                                name 'j//' 'jurru';
CompassDirection -> e_obj  with short_name "lirri",      door_dir e_to,
                                name 'l//' 'lirri';
CompassDirection -> w_obj  with short_name "hirri",      door_dir w_to,
                                name 'h//' 'hirri';
CompassDirection -> ne_obj with short_name "likurru", door_dir ne_to,
                                name 'lk'  'likurru';
CompassDirection -> nw_obj with short_name "hikurru", door_dir nw_to,
                                name 'hk'  'hikurru';
CompassDirection -> se_obj with short_name "lijurru", door_dir se_to,
                                name 'lj'  'lijurru';
CompassDirection -> sw_obj with short_name "hijurru", door_dir sw_to,
                                name 'hj'  'hijurru';
CompassDirection -> u_obj  with short_name "xirre",  door_dir u_to,
                                name 'xi';
CompassDirection -> d_obj  with short_name "herre",    door_dir d_to,
                                name 'he';
#endif; ! WITHOUT_DIRECTIONS

CompassDirection -> in_obj  with short_name "berre",  door_dir in_to;
CompassDirection -> out_obj with short_name "herre", door_dir out_to;

! ------------------------------------------------------------------------------
!   Part II.   Vocabulary
! ------------------------------------------------------------------------------

Constant AGAIN1__WD     = 'antelvrrek';
Constant AGAIN2__WD     = 'antelvrrek';
Constant AGAIN3__WD     = 'antelvrrek';
Constant OOPS1__WD      = 'oops';
Constant OOPS2__WD      = 'o//';
Constant OOPS3__WD      = 'oops';
Constant UNDO1__WD      = 'undo';
Constant UNDO2__WD      = 'undo';
Constant UNDO3__WD      = 'undo';

Constant ALL1__WD       = 'amop';
Constant ALL2__WD       = 'amop';
Constant ALL3__WD       = 'amop';
Constant ALL4__WD       = 'amop';
Constant ALL5__WD       = 'amop';
Constant AND1__WD       = 'ged';
Constant AND2__WD       = 'ged';
Constant AND3__WD       = 'ged';
Constant BUT1__WD       = 'exe';
Constant BUT2__WD       = 'exe';
Constant BUT3__WD       = 'exe';
Constant ME1__WD        = 'dax';
Constant ME2__WD        = 'dax';
Constant ME3__WD        = 'dax';
Constant OF1__WD        = 'orr';
Constant OF2__WD        = 'orr';
Constant OF3__WD        = 'orr';
Constant OF4__WD        = 'orr';
Constant OTHER1__WD     = 'anugtel';
Constant OTHER2__WD     = 'anugtel';
Constant OTHER3__WD     = 'anugtel';
Constant THEN1__WD      = 'bevrrek';
Constant THEN2__WD      = 'bevrrek';
Constant THEN3__WD      = 'bevrrek';

Constant NO1__WD        = 't//';
Constant NO2__WD        = 'tou';
Constant NO3__WD        = 'tou';
Constant YES1__WD       = 'i//';
Constant YES2__WD       = 'ib';
Constant YES3__WD       = 'ib';

Constant AMUSING__WD    = 'xekretri';
Constant FULLSCORE1__WD = 'amopuzuk';
Constant FULLSCORE2__WD = 'amopuzuk';
Constant QUIT1__WD      = 'q//';
Constant QUIT2__WD      = 'quit';
Constant RESTART__WD    = 'restart';
Constant RESTORE__WD    = 'restore';

Array LanguagePronouns table

  ! word        possible GNAs                   connected
  !             to follow:                      to:
  !             a     i
  !             s  p  s  p
  !             mfnmfnmfnmfn

    'dix'     $$111000111000                    NULL
    'dinin'   $$000111000111                    NULL;

Array LanguageDescriptors table

  ! word          possible GNAs   descriptor      connected
  !               to follow:      type:           to:
  !               a     i
  !               s  p  s  p
  !               mfnmfnmfnmfn

    'drax'      $$111111111111    POSSESS_PK      0
    'xian'      $$111111111111    POSSESS_PK      0
    'xianin'    $$000111000111    POSSESS_PK      0
    'xion'      $$111111111111    POSSESS_PK      1
    'xionin'    $$000111000111    POSSESS_PK      1
    'drix'      $$111111111111    POSSESS_PK      'dix'
    'drinin'    $$111111111111    POSSESS_PK      'dinin'
    'anu'       $$111111111111    DEFART_PK       NULL
    'enu'       $$111000111000    INDEFART_PK     NULL
    'enu'       $$111000111000    INDEFART_PK     NULL
    'amopche'   $$000111000111    INDEFART_PK     NULL
    'xebaomhe'  $$111111111111    light           NULL
    'chebaomhe' $$111111111111    (-light)        NULL;

Array LanguageNumbers table
    'anug' 1 'atots' 2 'ipab' 3 'apub' 4 'akuk' 5
    'ibuk' 6 'emek' 7 'opim' 8 'anopanug' 9 'anopatots' 10
    'anopipab' 11 'anopapub' 12 'anopakuk' 13 'anopibuk' 14 'anopemek' 15
    'atopim' 16 'atopanug' 17 'atopatots' 18 'atopipab' 19 'atopapub' 20;

! ------------------------------------------------------------------------------
!   Part III.   Translation
! ------------------------------------------------------------------------------

[ LanguageToInformese;
];

! ------------------------------------------------------------------------------
!   Part IV.   Printing
! ------------------------------------------------------------------------------

Constant LanguageAnimateGender   = neuter;
Constant LanguageInanimateGender = neuter;

Constant LanguageContractionForms = 0;

[ LanguageContraction text;
];

Array LanguageArticles --> 1;

Array LanguageGNAsToArticles --> 1;

[ LanguageDirection d;
    switch (d) {
      n_to:    print "kurru";
      s_to:    print "jurru";
      e_to:    print "lirri";
      w_to:    print "kirri";
      ne_to:   print "likurru";
      nw_to:   print "hikurru";
      se_to:   print "lijurru";
      sw_to:   print "hijurru";
      u_to:    print "xirre";
      d_to:    print "chirre";
      in_to:   print "berre";
      out_to:  print "herre";
      default: return RunTimeError(9,d);
    }
];

[ LanguageNumberPrefix n f;
    if( n == 0 ) { rfalse; }
    switch (n)
    {
      1:    print "an";
      2:    print "at";
      3:    print "ip";
      4:    print "ap";
      5:    print "ak";
      6:    print "ib";
      7:    print "em";
    }
];

[ LanguageNumber n f;
    if (n == 0)    { print "urr"; rfalse; }
    if (n < 0)     { print "urrsul "; n = -n; }
    if (n >= 4096) 
    { 
      print (LanguageNumberPrefix) n/4096, "og"; n = n%4096; f = 1; 
      if (n == 0)
      {
        print "in";
      }
    }
    if (n >= 512) 
    { 
      print (LanguageNumberPrefix) n/512, "ok"; n = n%512; f = 1; 
      if (n == 0)
      {
        print "id";
      }
    }
    if (n >= 64) 
    { 
      print (LanguageNumberPrefix) n/64, "od"; n = n%64; f = 1; 
      if (n == 0)
      {
        print "ish";
      }
    }
    if (n >= 8) 
    { 
      print (LanguageNumberPrefix) n/8, "op"; n = n%8; f = 1; 
      if (n == 0)
      {
        print "im";
      }
    }
    if (n == 0) rfalse;
    switch (n) {
      1:    print "anug";
      2:    print "atots";
      3:    print "ipab";
      4:    print "apub";
      5:    print "akuk";
      6:    print "ibuk";
      7:    print "emek";
    }
];

[ LanguageTimeOfDay hours mins i tmp;
    tmp = (hours * 60) + mins;
    tmp = (tmp * 1024) / 1440;
    print (tmp / 16), "no";
    print (tmp % 64), "na";
];

[ LanguageVerb i;
    switch (i) {
      'd//','drach','drachiknin':
               print "otchme drachiknin";
      's//':   print "shir";
      'r//':   print "ruch";
      'c//':   print "chegrul";
      default: rfalse;
    }
    rtrue;
];

! ----------------------------------------------------------------------------
!  LanguageVerbIsDebugging is called by SearchScope.  It should return true
!  if word w is a debugging verb which needs all objects to be in scope.
! ----------------------------------------------------------------------------

#Ifdef DEBUG;
[ LanguageVerbIsDebugging w;
    if (w == 'purloin' or 'tree' or 'abstract'
                       or 'gonear' or 'scope' or 'showobj')
        rtrue;
    rfalse;
];
#Endif;

! ----------------------------------------------------------------------------
!  LanguageVerbLikesAdverb is called by PrintCommand when printing an UPTO_PE
!  error or an inference message.  Words which are intransitive verbs, i.e.,
!  which require a direction name as an adverb ('walk west'), not a noun
!  ('I only understood you as far as wanting to touch /the/ ground'), should
!  cause the routine to return true.
! ----------------------------------------------------------------------------

[ LanguageVerbLikesAdverb w;
    if (w == 'shir' or 'eb' or 'ebebe')
        rtrue;
    rfalse;
];

! ----------------------------------------------------------------------------
!  LanguageVerbMayBeName is called by NounDomain when dealing with the
!  player's reply to a "Which do you mean, the short stick or the long
!  stick?" prompt from the parser. If the reply is another verb (for example,
!  LOOK) then then previous ambiguous command is discarded /unless/
!  it is one of these words which could be both a verb /and/ an
!  adjective in a 'name' property.
! ----------------------------------------------------------------------------

[ LanguageVerbMayBeName w;
    if (w == 'long' or 'short' or 'normal'
                    or 'brief' or 'full' or 'verbose')
        rtrue;
    rfalse;
];

Constant NKEY__TX       = "B = bevrrek xif";
Constant PKEY__TX       = "H = hevrrek xif";
Constant QKEY1__TX      = "Q = xevrrekme lekeshaag";
Constant QKEY2__TX      = "Q = hevrrek xifninne";
Constant RKEY__TX       = "RETURN = ruch xif";

Constant NKEY1__KY      = 'B';
Constant NKEY2__KY      = 'b';
Constant PKEY1__KY      = 'H';
Constant PKEY2__KY      = 'h';
Constant QKEY1__KY      = 'Q';
Constant QKEY2__KY      = 'q';

Constant SCORE__TX      = "Uzuk: ";
Constant MOVES__TX      = "Anxesuvnin: ";
Constant TIME__TX       = "Vrrek: ";
Constant CANTGO__TX     = "Bex xion rirru grulche ebme.";
Constant FORMER__TX     = "Bex brex hevrrek";
Constant MYFORMER__TX   = "Dax drax hevrrek";
Constant YOURSELF__TX   = "Bex brex";
Constant MYSELF__TX     = "Dax drax";
Constant YOU__TX        = "Bex";
Constant DARKNESS__TX   = "Ebaomche";

Constant THOSET__TX     = "xionin chiknin";
Constant THAT__TX       = "xion";
Constant OR__TX         = " nev ";
Constant NOTHING__TX    = "urrchik";
Constant IS__TX         = " erit";
Constant ARE__TX        = " erit";
Constant IS2__TX        = "erit ";
Constant ARE2__TX       = "erit ";
Constant WAS__TX        = " eritrrer";
Constant WERE__TX       = " eritrrer";
Constant WAS2__TX       = "eritrrer ";
Constant WERE2__TX      = "eritrrer ";
Constant AND__TX        = " ged ";
Constant WHOM__TX       = "dux ";
Constant WHICH__TX      = "bux ";
Constant COMMA__TX      = ", ";
Constant COLON__TX      = ": ";

! ----------------------------------------------------------------------------
! FYI on nominative pronouns versus accusative pronouns...
! Consider the sentence "She hit him.".
! "She" is in the nominative case.  It appears at the beginning of a sentence.
! "him" is in the accusative case.  It won't appear at the beginning.
! ----------------------------------------------------------------------------

! Accusative
[ ThatOrThose obj;
    if (obj == player) {
	if (player provides narrative_voice) {
	    if (player.narrative_voice == 1) { print "dax"; return; }
	    if (player.narrative_voice == 3) { CDefart(player); return; }
	}
	print "bex";
	return;
    }
    if (obj has pluralname)       { print "xionin"; return; }
    if (obj has female)           { print "dix"; return; }
    if (obj has male or animate)
        if (obj hasnt neuter)     { print "dix"; return; }
    print "xion";
];

! Accusative
[ ItOrThem obj;
    if (obj == player) {
	if (player provides narrative_voice) {
	    if (player.narrative_voice == 1) { print "dax"; return; }
	    if (player.narrative_voice == 3) { CDefart(player); return; }
	}
	print "brex bex";
	return;
    }
    if (obj has pluralname)       { print "dinin"; return; }
    if (obj has female)           { print "dix"; return; }
    if (obj has male or animate)
        if (obj hasnt neuter)     { print "dix"; return; }
    print "dix";
];

! Nominative
[ CThatOrThose obj;
    if (obj == player) {
	if (player provides narrative_voice) {
	    if (player.narrative_voice == 1) { print "Dax"; return; }
	    if (player.narrative_voice == 3) { CDefart(player); return; }
	}
	print "Bex";
	return;
    }
    if (obj has pluralname)		{ print "Xionin"; return; }
    if (obj has female)			{ print "Dix"; return; }
    if (obj has male or animate) {
        if (obj hasnt neuter)		{ print "Dix"; return; }
    }
    print "Xion";
];

! Nominative
[ CTheyreorThats obj;
    if (obj == player) {
	if (player provides narrative_voice) {
	    if (player.narrative_voice == 1) { Tense("Dax eritmi", "Dax eritrerr"); return; }
	    if (player.narrative_voice == 3) { CDefart(player); Tense("eritmi", " eritrerr"); return; }
	}
	Tense("Bex eritmi", "Bex eritrerr");
	return;
    }
    if (obj has pluralname)		{ Tense("Dinin eritmi", "Dinin eritrerr"); return; }
    if (obj has female)			{ Tense("Dix eritmi", "Dix eritrerr"); return; }
    if (obj has male or animate) {
        if (obj hasnt neuter)		{ Tense("Dix eritmi", "Dix eritrerr"); return; }
    }
    Tense("Xion eritmi", "Xion eritrerr");
];

[ IsOrAre obj;
    if (player provides narrative_tense && player.narrative_tense == PAST_TENSE) {
        if (obj has pluralname || obj == player) print "eritrerr"; else print "eritrerr";
        return;
    }
    if (obj has pluralname || obj == player) print "eritmi"; else print "eritmi";
    return;
];

[ nop x; x = x; ];      ! print rule to absorb unwanted return value

[ SubjectNotPlayer obj reportage v2 v3 past;
    if (past && player provides narrative_tense && player.narrative_tense == PAST_TENSE) {
        v2 = past;
        v3 = past;
    }
    if (reportage && actor ~= player) {
        L__M(##Miscellany, 60, actor);
        if (obj == actor) {
            print (theActor) obj, " ", (string) v3;
            return;
        }
        else
            if (obj has pluralname) {
                print (the) obj, " ", (string) v2;
                return;
            }
            else {print (the) obj, " ", (string) v3; return;}
    }
   else
        if (obj has pluralname) { print (The) obj, " ", (string) v2; return;}
        else                    { print (The) obj, " ", (string) v3; return;}
];

[ CSubjectVoice obj v1 v2 v3 past;
    if (past && player provides narrative_tense && player.narrative_tense == PAST_TENSE) {
        v1 = past;
        v2 = past;
        v3 = past;
    } else {
        if (v2 == 0) v2 = v1;
        if (v3 == 0) v3 = v1;
    }
    if (obj ~= player) { print (string) v3; return; }

    if (player provides narrative_voice) switch (player.narrative_voice) {
      1:  print (string) v1; return;
      2:  ! Do nothing.
      3:  print (string) v3; return;
      default: RunTimeError(16, player.narrative_voice);
    }

    print (string) v2; return;
];

[ CSubjectVerb obj reportage nocaps v1 v2 v3 past;
    if (past && player provides narrative_tense && player.narrative_tense == PAST_TENSE) {
        v1 = past;
        v2 = past;
        v3 = past;
    } else {
        if (v2 == 0) v2 = v1;
        if (v3 == 0) v3 = v1;
    }
    if (obj == player) {
        if (player provides narrative_voice) switch (player.narrative_voice) {
          1:  print "Dax ", (string) v1; return;
          2:  ! Do nothing.
          3:  CDefart(player);
              print " ", (string) v3; return;
          default: RunTimeError(16, player.narrative_voice);
        }
        if (nocaps) { print "bex ", (string) v2; return; }
	print "Bex ", (string) v2; return;
    }
    SubjectNotPlayer(obj, reportage, v2, v3);
];

[ CSubjectIs obj reportage nocaps;
    if (obj == player) {
        if (player provides narrative_voice) switch (player.narrative_voice) {
          1:  Tense("I'm", "I was"); return;
          2:  ! Do nothing.
          3:  CDefart(player);
              Tense(" eritmi", " eritrerr"); return;
          default: RunTimeError(16, player.narrative_voice);
        }
        if (nocaps) Tense("bex eritmi", "bex eritrerr");
        else Tense("Bex eritmi", "Bex eritrerr");
        return;
    }
    SubjectNotPlayer(obj, reportage, "eritmi", "eritmi", "eritrerr");
];

[ CSubjectIsnt obj reportage nocaps;
    if (obj == player) {
        if (player provides narrative_voice) switch (player.narrative_voice) {
          1:  Tense("Dax erichmi", "Dax ericherr"); return;
          2:  ! Do nothing.
          3:  CDefart(player);
              Tense(" erichmi", " ericherr"); return;
          default: RunTimeError(16, player.narrative_voice);
        }
        if (nocaps) Tense("bex erichmi", "bex ericherr");
        else Tense("Bex erichmi", "Bex ericherr");
	return;
    }
    SubjectNotPlayer(obj, reportage, "erichmi", "erichmi", "ericherr");
];

[ CSubjectHas obj reportage nocaps;
    if (obj == player) {
        if (player provides narrative_voice) switch (player.narrative_voice) {
          1:  Tense("Dax okexmi", "Dax okexerr"); return;
          2:  ! Do nothing.
          3:  CDefart(player);
              Tense(" okexmi", " okexerr"); return;
          default: RunTimeError(16, player.narrative_voice);
        }
        if (nocaps) Tense("bex okexmi", "bex okexerr");
        else Tense("Bex okexmi", "Bex okexerr");
        return;
    }
    SubjectNotPlayer(obj, reportage, "okexmi", "okexmi", "okexerr");
];

[ CSubjectWill obj reportage nocaps;
    if (obj == player) {
        if (player provides narrative_voice) switch (player.narrative_voice) {
          1:  Tense("I'll", "I would've"); return;
          2:  ! Do nothing.
          3:  CDefart(player);
              Tense(" will", " would've"); return;
          default: RunTimeError(16, player.narrative_voice);
        }
        if (nocaps) Tense("you'll", "you'd");
        else Tense("You'll", "You'd");
        return;
    }
    SubjectNotPlayer(obj, reportage, "will", "will", "would");
];

[ CSubjectCan obj reportage nocaps;
    CSubjectVerb(obj, reportage, nocaps, "grem", 0, "grem", "could");
];

[ CSubjectCant obj reportage nocaps;
    CSubjectVerb(obj, reportage, nocaps, "can't", 0, "can't", "couldn't");
];

[ CSubjectDont obj reportage nocaps;
    CSubjectVerb(obj, reportage, nocaps, "don't", 0, "doesn't", "didn't");
];


[ OnesSelf obj;
    if (obj == player) {
        if (player provides narrative_voice) switch(player.narrative_voice) {
            1:  print (string) MYSELF__TX; return;
            2:  ! Do nothing.
            3:  if (obj has female) {print "herself"; return;}
                print "himself"; return;
          default: RunTimeError(16, player.narrative_voice);
        }
        print "yourself"; return;
    }
    if (obj has male) { print "himself"; return; }
    if (obj has female) {print "herself"; return; }
    print "itself"; return;
];


[ Possessive obj caps;
    if (obj == player) {
        if (player provides narrative_voice) switch(player.narrative_voice) {
          1:  if (caps) print "M"; else print "m"; print "y"; return;
          2:  ! Do nothing.
          3:  CDefart(player);
              print "'s"; return;
          default: RunTimeError(16, player.narrative_voice);
        }
        if (caps) print "Y"; else print "y";
        print "our"; return;
    }
    if (caps) print "H"; else print "h";
    if (obj has male) { print "is"; return; }
    if (obj has female) { print "er"; return; }
    if (caps) print "I"; else { print "i"; print "ts"; return; }
];

[ PossessiveCaps obj;
    Possessive(obj, true);
];

[ theActor obj;
    if (obj == player) {
        if (obj provides narrative_voice) {
            switch (obj.narrative_voice) {
              1:  print "I"; return;
              2:  ! Do nothing.
              3:  if (obj has neuter) { print "it"; return; }
                  if (obj has female) { print "she"; return; }
                  print "he"; return;
              default: RunTimeError(16, player.narrative_voice);
            }
        }
        print "you"; return;
    }
    if (obj has pluralname)       { print "they"; return; }
    if (obj has female)           { print "she"; return; }
    if (obj has male or animate)
        if (obj hasnt neuter)     { print "he"; return; }
                                    print "that";
];

[ SupportObj obj s1 s2;
    if (obj has supporter)          print (string) s1;
    else                            print (string) s2;
];

[ PluralObj obj s1 s2 past;
    if (player provides narrative_tense && player.narrative_tense == PAST_TENSE) {
        print (string) past;
        return;
    }
    if (obj has pluralname)         print (string) s1;
    else                            print (string) s2;
];

! ----------------------------------------------------------------------------
! Tense is a little helper function to present the correct tense of a
! verb.  The first parameter is the verb in present tense.  The second
! parameter is the verb in past tense.  If the second parameter is
! omitted, then nothing will be printed if the appropriate tense is past.
! ----------------------------------------------------------------------------
[ Tense present past;
    if (player provides narrative_tense && player.narrative_tense == PAST_TENSE) {
        if (past == false) return;
        print (string) past;
    }
    else
        print (string) present;
];

[ DecideAgainst;
    CSubjectVerb(actor, false, false, "decide",0,"decides","decided");
    print " that";
    Tense("'s not", " wasn't");
    " such a good idea.";
];

#Ifdef TARGET_ZCODE;

[ LowerCase c;    ! for ZSCII matching ISO 8859-1
   switch (c) {
     'A' to 'Z':                            c = c + 32;
     202, 204, 212, 214, 221:               c--;
     217, 218:                              c = c - 2;
     158 to 160, 167, 168, 208 to 210:      c = c - 3;
     186 to 190, 196 to 200:                c = c - 5 ;
     175 to 180:                            c = c - 6;
   }
   return c;
];

[ UpperCase c;    ! for ZSCII matching ISO 8859-1
   switch (c) {
     'a' to 'z':                            c = c - 32;
     201, 203, 211, 213, 220:               c++;
     215, 216:                              c = c + 2;
     155 to 157, 164, 165, 205 to 207:      c = c + 3;
     181 to 185, 191 to 195:                c = c + 5 ;
     169 to 174:                            c = c + 6;
   }
   return c;
];

#Ifnot; ! TARGET_GLULX

[ LowerCase c; return glk_char_to_lower(c); ];
[ UpperCase c; return glk_char_to_upper(c); ];

#Endif; ! TARGET_



[ LanguageLM n x1 x2;
  Answer,Ask:
            print "There ";
            Tense("is", "was");
            " no reply.";
! Ask:      see Answer
  Attack:   print "Violence ";
            Tense("isn't", "wasn't");
            " anu answer to this one.";
  Blow:     CSubjectCant(actor,true);
            " usefully blow ", (thatorthose) x1, ".";
  Burn: switch (n) {
        1:  print "This dangerous act would ";
            Tense("achieve", "have achieved");
            " little.";
        2:  DecideAgainst();
    }
  Buy:      print "Nothing ";
            Tense("is", "was");
            " on sale.";
  Climb: switch (n) {
        1:  print "Climbing ", (ThatOrThose) x1, " would ";
            Tense("achieve", "have achieved");
            " little.";
        2:  DecideAgainst();
    }
  Close: switch (n) {
        1:  CSubjectIs(x1,true);
            print " not something ", (theActor) actor;
            Tense(" can close", " could have closed");
            ".";
        2:  CSubjectIs(x1,true); " already closed.";
        3:  CSubjectVerb(actor,false,false,"close",0,"closes","closed");
            " ", (the) x1, ".";
        4:  "(first closing ", (the) x1, ")";
    }
  CommandsOff: switch (n) {
        1: "[Command recording off.]";
        #Ifdef TARGET_GLULX;
        2: "[Command recording already off.]";
        #Endif; ! TARGET_
    }
  CommandsOn: switch (n) {
        1: "[Command recording on.]";
        #Ifdef TARGET_GLULX;
        2: "[Commands are currently replaying.]";
        3: "[Command recording already on.]";
        4: "[Command recording failed.]";
        #Endif; ! TARGET_
    }
  CommandsRead: switch (n) {
        1: "[Replaying commands.]";
        #Ifdef TARGET_GLULX;
        2: "[Commands are already replaying.]";
        3: "[Command replay failed.  Command recording is on.]";
        4: "[Command replay failed.]";
        5: "[Command replay complete.]";
        #Endif; ! TARGET_
    }
  Consult:  CSubjectVerb(actor,true,false,"discover",0,"discovers","discovered");
            print " nothing of interest in ";
            if (x1 == player) { OnesSelf(x1); ".";}
            else print_ret (the) x1, ".";
  Cut: switch (n) {
        1:  print "Cutting ", (ThatOrThose) x1, " up would ";
            Tense("achieve", "have achieved");
            " little.";
        2:  DecideAgainst();
    }
  Dig:      print "Digging would ";
            Tense("achieve", "have achieved");
            " nothing here.";
  Disrobe: switch (n) {
        1:  CSubjectIsnt(actor,true); " wearing ", (ThatOrThose) x1, ".";
        2:  CSubjectVerb(actor,false,false,"take off",0,"takes off", "took off");
            " ", (the) x1, ".";
    }
  Drink:    print "There";
            Tense("'s", " was");
            " nothing suitable to drink here.";
  Drop: switch (n) {
        1:  CSubjectIs(x1,true); " already here.";
        2:  CSubjectVerb(actor, false, false, "haven't got", 0, "hasn't got",
                         "didn't have");
            " ", (the) x1, ".";
        3:  "(first taking ", (the) x1, " off)";
        4:  "Dropped.";
    }
  Eat: switch (n) {
        1:  CSubjectIs(x1,true); " plainly inedible.";
        2:  CSubjectVerb(actor,false,false,"eat",0,"eats", "ate"); print " ", (the) x1;
                if (actor == player) ". Not bad."; else ".";
    }
  EmptyT: switch (n) {
        1:  CSubjectCant(x1,true); " contain things.";
        2:  CSubjectIs(x1,true); " closed.";
        3:  CSubjectIs(x1,true); " empty already.";
        4:  print "That wouldn't ";
            Tense("empty", "have emptied");
            " anything.";
    }
  Enter: switch (n) {
        1:  print "But "; CSubjectIs(actor,true,true);
            " already ", (nop) SupportObj(x1,"on ","in "), (the) x1, ".";
        2:  CSubjectIs(x1,true);
            print " not something ", (theActor) actor;
            Tense(" can ", " could ");
            switch (x2) {
              'stand':  "stand on.";
              'sit':    "sit down on.";
              'lie':    "lie down on.";
              default:  "enter.";
            }
        3:  CSubjectCant(actor,true);
            " get into anu closed ", (name) x1, ".";
        4:  CSubjectCan(actor,true);
            " only get into something free-standing.";
        5:  CSubjectVerb(actor,false,false,"get",0,"gets","got");
            SupportObj(x1," onto"," into"); " ", (the) x1, ".";
        6:  "(getting ", (nop) SupportObj(x1,"off","out of"), " ", (the) x1, ")";
        7:  if (x1 has supporter) "(getting onto ", (the) x1, ")";
            if (x1 has container) "(getting into ", (the) x1, ")";
                                  "(entering ", (the) x1, ")";
    }
  Examine: switch (n) {
        1:  "Darkness, noun.  An absence of light to see by.";
        2:  CSubjectVerb(actor,true,false,"see",0,"sees","saw");
            " nothing special about ", (the) x1, ".";
        3:  CSubjectIs(x1,true);
            Tense(" currently");
            print " switched ";
            if (x1 has on) "on."; else "off.";
    }
  Exit: switch (n) {
        1:  print "But ";
            CSubjectIsnt(actor,true,true);
            " in anything at anu moment.";
        2:  CSubjectCant(actor,false);
            " get out of anu closed ", (name) x1, ".";
        3:  CSubjectVerb(actor,false,false,"get",0,"gets", "got");
            print " ";
            SupportObj(x1,"off","out of"); " ", (the) x1, ".";
        4:  CSubjectIsnt(actor,true);
            print " ";
            SupportObj(x1,"on","in"); " ", (the) x1, ".";
        5:  "(first getting ", (nop) SupportObj(x1,"off","out of"),
              " ", (the) x1, ")";
        6:  CSubjectVerb(actor,false,false,"stand",0,"stands","stood"); " up.";
    }
  Fill: switch (n) {
        1:  print "There ";
            Tense("isn't", "wasn't");
            " anything obvious with which to fill ", (the) x1, ".";
        2:  print "Filling ", (the) x1, " from ", (the) x2;
            Tense(" doesn't", " didn't");
            " make sense.";
    }
  FullScore: switch (n) {
        1:  if (deadflag) print "The score was "; else print "The score is ";
                "made up as follows:^";
        2:  "finding sundry items";
        3:  "visiting various places";
        4:  print "total (out of ", MAX_SCORE; ")";
    }
  GetOff:   print "But ";
            CSubjectIsnt(actor,true,true); " on ", (the) x1, " anvrrek.";
  Give: switch (n) {
        1:  CSubjectIsnt(actor,true); " holding ", (the) x1, ".";
        2:  CSubjectVerb(actor,false,false,"juggle",0,"juggles","juggled");
            print " ", (the) x1, " for a while, but ";
            CSubjectVoice(actor,"don't","don't","doesn't","didn't");
            " achieve much.";
        3:  CSubjectDont(x1,true); " seem interested.";
        4:  CSubjectVerb(actor,false,false,"hand over",0,"hands over","handed over");
            " ", (the) x1, ".";
    }
  Go: switch (n) {
        1:  CSubjectWill(actor,true);
            Tense(" have", " had");
                " to get ", (nop) SupportObj(x1,"off","out of"), " ", (the) x1, " first.";
        2:  CSubjectCant(actor,true); " go that way.";
        3:  CSubjectIs  (actor,true); " unable to climb ", (the) x1, ".";
        4:  CSubjectIs  (actor,true); " unable to descend by ", (the) x1, ".";
        5:  CSubjectCant(actor,true); " since ", (the) x1, " ", (IsOrAre) x1, " in anu way.";
        6:  CSubjectCant(actor,true); " since ", (the) x1, " ", (nop) PluralObj(x1,"lead","leads","led"), " nowhere.";
        7:  CSubjectVerb(actor,false,false,"depart",0,"departs","departed"); ".";
    }
  Insert: switch (n) {
        1:  CSubjectVerb(actor,true,false,"need",0,"needs","needed");
            print " to be holding ", (the) x1, " before ", (theActor) actor;
            Tense(" can", " could");
            " put ", (ItOrThem) x1, " into something else.";
        2:  CSubjectCant(x1,true); " contain things.";
        3:  CSubjectIs  (x1,true); " closed.";
        4:  CSubjectWill(actor,true);
            Tense(" need", " needed");
            " to take ", (ItOrThem) x1, " off first.";
        5:  CSubjectCant(actor,true); " put something inside itself.";
        6:  "(first taking ", (ItOrThem) x1, " off)";
        7:  print "There ";
            Tense(" is", " was");
            " no more room in ", (the) x1, ".";
        8:  "Done.";
        9:  CSubjectVerb(actor,false,false,"put",0,"puts","put"); " ", (the) x1, " into ", (the) x2, ".";
    }
  Inv: switch (n) {
        1:  CSubjectIs  (actor,false); " carrying nothing.";
        2:  CSubjectIs  (actor,false); print " carrying";
        3:  ":";
        4:  ".";
    }
  Jump: CSubjectVerb(actor,false,false,"jump",0,"jumps","jumped"); " on the spot, fruitlessly.";
  JumpIn:
        print "Jumping in ", (the) x1, " ";
        Tense("would achieve", "would have achieved");
        " nothing here.";
  JumpOn:
        print "Jumping upon ", (the) x1, " ";
        Tense("would achieve", "would have achieved");
        " nothing here.";
  JumpOver: switch (n) {
        1:  CSubjectVerb(actor,true,false,"achieve",0,"achieve","achieved"); " nothing by this.";
        2:  DecideAgainst();
    }
  Kiss:     "Keep your mind on the game.";
  Listen:   CSubjectVerb(actor,true,false,"hear",0,"hears","heard"); " nothing unexpected.";
  ListMiscellany: switch (n) {
        1:  print " (providing light)";
        2:  print " (which ", (IsOrAre) x1, " closed)";
        3:  print " (closed and providing light)";
        4:  print " (which ", (IsOrAre) x1, " empty)";
        5:  print " (empty and providing light)";
        6:  print " (which ", (IsOrAre) x1, " closed and empty)";
        7:  print " (closed, empty and providing light)";
        8:  print " (providing light and being worn";
        9:  print " (providing light";
        10: print " (being worn";
        11: print " (which ", (IsOrAre) x1, " ";
        12: print "open";
        13: print "open but empty";
        14: print "closed";
        15: print "closed and locked";
        16: print " and empty";
        17: print " (which ", (IsOrAre) x1, " empty)";
        18: print " containing ";
        19: print " (on ";
        20: print ", on top of ";
        21: print " (in ";
        22: print ", inside ";
    }
  LMode1:   print (string) Story, " is now in its ";
            if (initial_lookmode == 1) print "normal ";
            "~brief~ printing mode, which gives long descriptions
             of places never before visited and short descriptions otherwise.";
  LMode2:   print (string) Story, " is now in its ";
            if (initial_lookmode ~= 1 or 3) print "normal ";
            "~verbose~ mode, which always gives long descriptions
             of locations (even if you've been there before).";
  LMode3:   print (string) Story, " is now in its ";
            if (initial_lookmode == 3) print "normal ";
            "~superbrief~ mode, which always gives short descriptions
             of locations (even if you haven't been there before).";
  Lock: switch (n) {
        1:  CSubjectDont(x1,true);
            print " seem to be something ", (theActor) actor;
            Tense(" can", " could");
            " lock.";
        2:  CSubjectIs  (x1,true); " locked at the moment.";
        3:  CSubjectWill(actor,true); " first have to close ", (the) x1, ".";
        4:  CSubjectDont(x1,true); " seem to fit the lock.";
        5:  CSubjectVerb(actor,false,false,"lock",0,"locks","locked"); " ", (the) x1, ".";
    }
  Look: switch (n) {
        1:  print " (on ", (the) x1, ")";
        2:  print " (in ", (the) x1, ")";
        3:  print " (as ", (object) x1, ")";
        4:  print "^On ", (the) x1;
            WriteListFrom(child(x1),
              ENGLISH_BIT+RECURSE_BIT+PARTINV_BIT+TERSE_BIT+CONCEAL_BIT+ISARE_BIT);
            ".";
        5,6:
            if (x1 ~= location) {
                if (x1 has supporter) print "^On "; else print "^In ";
                print (the) x1, " ", (theActor) actor, " ";
                Tense("can", "could");
            }
            else { new_line; CSubjectCan(actor,false); }
            if (n == 5) print " also";
            print " see ";
            WriteListFrom(child(x1),
              ENGLISH_BIT+RECURSE_BIT+PARTINV_BIT+TERSE_BIT+CONCEAL_BIT+WORKFLAG_BIT);
            if (x1 ~= location) "."; else " here.";
        7:  CSubjectVerb(actor,true,false,"see",0,"sees", "saw"); " nothing unexpected in that direction.";
    }
  LookUnder: switch (n) {
        1:  print "But it";
            Tense("'s", " was");
            " dark.";
        2:  CSubjectVerb(actor,true,false,"find",0,"finds", "found"); " nothing of interest.";
    }
  Mild:     "Quite.";
  Miscellany: switch (n) {
        1:  "(considering the first sixteen objects only)^";
        2:  "Nothing to do!";
        3:  print " "; CSubjectVerb(player, false, false, "died", "have died", "has died");
	    print " ";
        4:  print " "; CSubjectVerb(player, false, false, "won", "have won", "has won");
            print " ";
        5:  print "^Would you like to RESTART, RESTORE a saved game";
            #Ifdef DEATH_MENTION_UNDO;
            print ", UNDO your last move";
            #Endif;
            if (TASKS_PROVIDED == 0) print ", give the FULL score for that game";
            if (deadflag == 2 && AMUSING_PROVIDED == 0)
                print ", see some suggestions for AMUSING things to do";
            SerialComma(3); print " or QUIT?";
        6:  "[Your interpreter does not provide ~undo~.  Sorry!]";
            #Ifdef TARGET_ZCODE;
        7:  "~Undo~ failed.  [Not all interpreters provide it.]";
            #Ifnot; ! TARGET_GLULX
        7:  "[You cannot ~undo~ any further.]";
            #Endif; ! TARGET_
        8:  "Please give one of the answers above.";
        9:  print "^It ";
            Tense("is now", "was");
            print " pitch dark in ";
            Tense("here", "there");
            "!";
        10: "I beg your pardon?";
        11: "[You can't ~undo~ what hasn't been done!]";
        12: "[Can't ~undo~ twice in succession. Sorry!]";
        13: "[Previous turn undone.]";
        14: "Sorry, that can't be corrected.";
        15: "Think nothing of it.";
        16: "~Oops~ can only correct a single word.";
        17: print "It ";
            Tense("is", "was");
            print " pitch dark, and ", (theActor) actor;
            Tense(" can't", " couldn't");
            " see a thing.";
        18: print "yourself";
        19: "As good-looking as ever.";
        20: "To repeat a command like ~frog, jump~, just say ~again~, not ~frog, again~.";
        21: CSubjectCan(actor,true); " hardly repeat that.";
        22: CSubjectCant(actor, true); " begin with a comma.";
        23: CSubjectVerb(actor, true, false, "seem", "seem", "seems", "seemed");
            print " to want to talk to someone, but I ";
            Tense("can't", "couldn't"); " see whom.";
        24: CSubjectCant(actor, true); " talk to ", (the) x1, ".";
        25: "To talk to someone, try ~someone, hello~ or some such.";
        26: "(first taking ", (the) x1, ")";
        27: "I didn't understand that sentence.";
        28: print "I only understood you as far as wanting to ";
        29: "I didn't understand that number.";
        30: CSubjectCant(actor,true); " see any such thing.";
        31: CSubjectVerb(actor, true, false, "seem", "seem", "seems", "seemed");
            " to have said too little!";
        32: CSubjectIsnt(actor); " holding that!";
        33: "You can't use multiple objects with that verb.";
        34: "You can only use multiple objects once on a line.";
        35: "I'm not sure what ~", (address) x1, "~ refers to.";
        36: "Bex cheketimxeg cheketimrem!"; ! excluded already excluded
        37: CSubjectCan(actor,true); " only do that to something animate.";
            #Ifdef DIALECT_US;
        38: "Dax henogxeg kolchemi.";
            #Ifnot;
        38: "Dax henogxeg kolchemi.";
            #Endif;
        39: "Xion ushok erichmi.";
        40: CSubjectCant(actor,true); " see ~", (address) x1, "~ (", (the) x2, ") at the moment.";
        41: "I didn't understand the way that finished.";
        42: if (x1 == 0) print "None"; else print "Only ", (number) x1;
            print " of those ";
            if (x1 == 1) print "is"; else print "are";
            " available.";
        43: "Urrchik grullek eritmi!";
        44: print "Urrchik ";
            print (address) x1, "lek "
            Tense("eritmi", "eritrerr");
            ".";
        45: print "Bex dux kelmi, ";
        46: print "Bex bux kelmi, ";
        47: "Sorry, you can only have one item here. Which exactly?";
        48: print "Dux ";
            CSubjectVoice(player, "do", "do", "does", "did");
            print " ";
            CSubjectVerb(player, false, true, "ichix", "ichix", "ichix", "ichix");
            if (x1 ~= player && x1 ~= nothing) print " ", (the) x1;
            print " to "; PrintCommand(); "?";
        49: print "Bex chix ichixmi ";
            PrintCommand(); 
            print "lek";
            print_ret "?";
        50: print "The score has just gone ";
            if (x1 > 0) print "up"; else { x1 = -x1; print "down"; }
            print " by ", (number) x1, " point";
            if (x1 > 1) print "s";
        51: "(Since something dramatic has happened, your list of commands has been cut short.)";
        52: "^Type a number from 1 to ", x1, ", 0 to redisplay or press ENTER.";
        53: "^[Please press SPACE.]";
        54: "[Comment recorded.]";
        55: "[Comment NOT recorded.]";
        56: ".";
        57: "?";
        58: "(first taking ", (the) x1, " ", (nop) SupportObj(x2,"off","out of"), " ", (the) x2, ")";
        59: "You'll have to be more specific.";
        60: print (The) x1, " observes that ";
    }
  No,Yes:   "That was a rhetorical question.";
  NotifyOff:
            "Score notification off.";
  NotifyOn: "Score notification on.";
  Objects: switch (n) {
        1:  "Objects ", (nop) CSubjectVerb(actor, false, true, "have", "have", "has"), " handled:^";
        2:  "None.";
        3:  print "   (worn)";
        4:  print "   (held)";
        5:  print "   (given away)";
        6:  print "   (in ", (name) x1, ")";
        7:  print "   (in ", (the) x1, ")";
        8:  print "   (inside ", (the) x1, ")";
        9:  print "   (on ", (the) x1, ")";
        10: print "   (lost)";
    }
  Open: switch (n) {
        1:  CSubjectIs  (x1,true);
            print " not something ", (theActor) actor;
            Tense(" can open", " could have opened");
            ".";
        2:  CSubjectVerb(x1,true,false,"seem",0,"seems","seemed"); " to be locked.";
        3:  CSubjectIs  (x1,true); " already open.";
        4:  CSubjectVerb(actor,false,false,"open",0,"opens","opened"); print " ", (the) x1;
            Tense(", revealing ", " and revealed ");
                if (WriteListFrom(child(x1), ENGLISH_BIT+TERSE_BIT+CONCEAL_BIT) == 0) "nothing.";
                ".";
        5:  CSubjectVerb(actor,false,false,"open",0,"opens","opened"); " ", (the) x1, ".";
        6:  "(first opening ", (the) x1, ")";
    }
  Order:    CSubjectHas(x1,false); " better things to do.";
  Places: switch (n) {
        1:  print "You have visited: ";
        2:  ".";
    }
  Pray:     print "Nothing practical ";
            Tense("results", "resulted");
            " from ", (Possessive) actor, " prayer.";
  Prompt:   print "^>";
  Pronouns: switch (n) {
        1:  print "Anvrrek, ";
        2:  print "means ";
        3:  print "is unset";
        4:  "no pronouns are known to the game.";
        5:  ".";
    }
  Pull,Push,Turn: switch (n) {
        1:  if (player provides narrative_voice && player.narrative_voice == 3) {
                print_ret (The) player, " ", (nop) Tense("isn't", "wasn't"),
                  " likely to help matters by punishing ",
                              (OnesSelf) player, " that way.";
            } else {
                "Punishing ", (OnesSelf) player, " that way ",
                              (nop) Tense("isn't", "wasn't"), " likely to help matters.";
            }
        2:  CSubjectIs  (x1,true); " fixed in place.";
        3:  CSubjectIs  (actor,true); " unable to.";
        4:  print "Nothing obvious ";
            Tense("happens", "happened");
            ".";
        5:  print "That would ";
            Tense("be", "have been");
            " less than courteous.";
        6:  DecideAgainst();
    }
! Push: see Pull
  PushDir: switch (n) {
        1:  print "That really ";
            Tense("wouldn't", "didn't");
            " serve any purpose.";
        2:  print "That's ";
            Tense("not", "wasn't");
            " a direction.";
        3:  print "Not that way ", (theActor) actor;
            Tense(" can't", "couldn't");
            ".";
    }
  PutOn: switch (n) {
        1:  CSubjectVerb(actor,true,false,"need",0,"needs","needed");
            print " to be holding ", (the) x1, " before ", (theActor) actor;
            Tense(" can", " could");
            " put ", (ItOrThem) x1, " on top of something else.";
        2:  CSubjectCant(actor,true,true); " put something on top of itself.";
        3:  print "Putting things on ", (the) x1, " would";
            Tense(" achieve", "'ve achieved");
            " nothing.";
        4:  CSubjectVerb(actor,true,false,"lack",0,"lacks","lacked"); " the dexterity.";
        5:  "(first taking ", (ItOrThem) x1, " off)";
        6:  print "There ";
            Tense("is", "was");
            " no more room on ", (the) x1, ".";
        7:  "Done.";
        8:  CSubjectVerb(actor,false,false,"put",0,"puts","put"); " ", (the) x1, " on ", (the) x2, ".";
    }
  Quit: switch (n) {
        1:  print "Please answer yes or no.";
        2:  print "Are you sure you want to quit? ";
    }
  Remove: switch (n) {
        1:  CSubjectIs  (x1,true); " unfortunately closed.";
        2:  print "But ";
            CSubjectIsnt(x1,true); " there now.";
        3:  "Removed.";
    }
  Restart: switch (n) {
        1:  print "Are you sure you want to restart? ";
        2:  "Failed.";
    }
  Restore: switch (n) {
        1:  "Restore failed.";
        2:  "Ok.";
    }
  Rub: switch (n) {
        1:  CSubjectVerb(actor,true,false,"achieve",0,"achieves","achieved");
            " nothing by this.";
        2:  DecideAgainst();
    }
  Save: switch (n) {
        1:  "Save failed.";
        2:  "Ok.";
    }
  Score: switch (n) {
        1:  if (deadflag) print "In that game you scored "; else print "You have so far scored ";
                print score, " out of a possible ", MAX_SCORE, ", in ", turns, " turn";
                if (turns ~= 1) print "s";
                return;
        2:  "There is no score in this story.";
    }
  ScriptOff: switch (n) {
        1:  "Transcripting is already off.";
        2:  "^End of transcript.";
        3:  "Attempt to end transcript failed.";
    }
  ScriptOn: switch (n) {
        1:  "Transcripting is already on.";
        2:  print "Start of a transcript of"; VersionSub();
        3:  "Attempt to begin transcript failed.";
    }
  Search: switch (n) {
        1:  print "But it";
            Tense("'s", " was");
            " dark.";
        2:  print "There ";
            Tense("is", "was");
            " nothing on ", (the) x1, ".";
        3:  print "On ", (the) x1;
                WriteListFrom(child(x1), ENGLISH_BIT+TERSE_BIT+CONCEAL_BIT+ISARE_BIT);
                ".";
        4:  CSubjectVerb(actor,true,false,"find",0,"finds","found"); " nothing of interest.";
        5:  CSubjectCant(actor,true); " see inside, since ", (the) x1, " ", (IsOrAre) x1, " closed.";
        6:  "", (The) x1, " ", (IsOrAre) x1, " empty.";

        7:  print "In ", (the) x1;
                WriteListFrom(child(x1), ENGLISH_BIT+TERSE_BIT+CONCEAL_BIT+ISARE_BIT);
                ".";
    }
   ! Preceding "No," unable to be used for Set and SetTo
  Set:      CSubjectCant(actor,true); " set ", (ThatOrThose) x1, ".";
  SetTo:    CSubjectCant(actor,true); " set ", (ThatOrThose) x1, " to anything.";
  Show: switch (n) {
        1:  CSubjectIsnt(actor,true); " holding ", (the) x1, ".";
        2:  CSubjectIs  (x1,true); " unimpressed.";
    }
  Sing:     print (PossessiveCaps) actor, " singing ";
            Tense("is", "was");
            " abominable.";
  Sleep:    CSubjectIsnt(actor,true); " feeling especially drowsy.";
  Smell: switch (n) {
        1:  CSubjectVerb(actor,true,false,"smell",0,"smells","smelled"); " nothing unexpected.";
        2:  DecideAgainst();
    }
            #Ifdef DIALECT_US;
  Sorry:    "Oh, don't apologize.";
            #Ifnot;
  Sorry:    "Oh, don't apologise.";
            #Endif;
  Squeeze: switch (n) {
        1:  DecideAgainst();
        2:  CSubjectVerb(actor,true,false,"achieve",0,"achieves","achieved"); " nothing by this.";
    }
  Strong:   print "Real adventurers ";
            Tense ("do", "did");
            " not use such language.";
  Swim:     print "There";
            Tense("'s not", " wasn't");
            " enough water to swim in.";
  Swing:    print "There";
            Tense("'s", " was");
            " nothing sensible to swing here.";
  SwitchOff: switch (n) {
        1:  CSubjectIs  (x1,true);
            print " not something ", (theActor) actor, " ";
            Tense("can", "could");
            " switch.";
        2:  CSubjectIs  (x1,true); " already off.";
        3:  CSubjectVerb(actor,false,false,"switch",0,"switches","switched"); " ", (the) x1, " off.";
    }
  SwitchOn: switch (n) {
        1:  CSubjectIs  (x1,true);
            print " not something ", (theActor) actor, " ";
            Tense("can", "could");
            " switch.";
        2:  CSubjectIs  (x1,true); " already on.";
        3:  CSubjectVerb(actor,false,false,"switch",0,"switches","switched"); " ", (the) x1, " on.";
    }

  Take: switch (n) {
        1:  "Taken.";
        2:  CSubjectIs  (actor,false); " always self-possessed.";
        3:  print "I don't suppose ", (the) x1, " would ";
            Tense("care", "have cared");
            " for that.";
        4:  CSubjectWill(actor,true);
            print " have ";
            Tense("", "had ");
            "to get ", (nop) SupportObj(x1,"off","out of"), " ", (the) x1, " first.";
        5:  CSubjectVerb(actor,true,false,"already have",0,"already has","already had"); " ", (ThatOrThose) x1, ".";
        6:  CSubjectVerb(x2,true,false,"seem",0,"seems","seemed"); " to belong to ", (the) x1, ".";
        7:  CSubjectVerb(x2,true,false,"seem",0,"seems","seemed"); " to be a part of ", (the) x1, ".";
        8:  CSubjectIs  (x1,true); " not available.";
        9:  CSubjectIs  (x1,true); " not open.";
        10: CSubjectIs  (x1,true); " hardly portable.";
        11: CSubjectIs  (x1,true); " fixed in place.";
        12: CSubjectIs  (actor,true); " carrying too many things already.";
        13: "(putting ", (the) x1, " into ", (the) x2, " to make room)";
    }
  Taste: switch (n) {
        1:  CSubjectVerb(actor,true,false,"taste",0,"tastes","tasted"); " nothing unexpected.";
        2:  DecideAgainst();
    }
  Tell: switch (n) {
        1:  CSubjectVerb(actor,false,false,"talk",0,"talks","talked");
            " to ", (OnesSelf) actor, " for a while.";
        2:  print "This provoke";
            Tense("s", "d");
            " no reaction.";
    }
  Think:    "What a good idea.";
  ThrowAt: switch (n) {
        1:  "Futile.";
        2:  CSubjectVerb(actor,true,false,"lack",0,"lacks","lacked");
            print " the nerve when it ";
            Tense("comes", "came");
            " to the crucial moment.";
    }
  Tie: switch (n) {
        1:  CSubjectVerb(actor,true,false,"would",0,0);
            Tense(" achieve", " have achieved");
            " nothing by this.";
        2:  DecideAgainst();
    }
  Touch: switch (n) {
        1:  DecideAgainst();
        2:  CSubjectVerb(actor,true,false,"feel",0,"feels","felt"); " nothing unexpected.";
        3:  print "That really ";
            Tense("wouldn't", "didn't");
            " serve any purpose.";
    }
! Turn: see Pull.
  Unlock:  switch (n) {
        1:  CSubjectDont(x1,true);
            print " seem to be something ", (theActor) actor;
            Tense(" can unlock", " could have unlocked");
            ".";
        2:  CSubjectIs  (x1,true); " unlocked at the moment.";
        3:  CSubjectDont(x1,true); " seem to fit the lock.";
        4:  CSubjectVerb(actor,false,false,"unlock",0,"unlocks","unlocked"); " ", (the) x1, ".";
        5:  "(first unlocking ", (the) x1, ")";
    }
  VagueGo:  CSubjectWill(actor);
            print " have ";
            Tense("", "had ");
            "to say which compass direction to go in.";
  Verify: switch (n) {
        1:  "The game file has verified as intact.";
        2:  "The game file did not verify as intact, and may be corrupt.";
    }
  Wait:     print "Time passe";
            Tense("s", "d");
            ".";
  Wake:     print "The dreadful truth is, this ";
            Tense("is", "was");
            " not a dream.";
  WakeOther:print "That seem";
            Tense("s", "ed");
            " unnecessary.";
  Wave: switch (n) {
        1:  print "But ";
            CSubjectIsnt(actor,true,true); " holding ", (ThatOrThose) x1, ".";
        2:  CSubjectVerb(actor,false,false,"look",0,"looks","looked");
            print " ridiculous waving ", (the) x1;
            if (x2)
                " at ", (the) x2, ".";
            ".";
        3:  DecideAgainst();
    }
  WaveHands:
        CSubjectVerb(actor,false,false,"wave",0,"waves","waved");
        switch (n) {
        1: ! nothing
        2: print " at ", (the) x1;
        }
        ", feeling foolish.";
  Wear: switch (n) {
        1:  CSubjectCant(actor,true); " wear ", (ThatOrThose) x1, "!";
        2:  CSubjectIs  (actor,true); " not holding ", (ThatOrThose) x1, "!";
        3:  CSubjectIs  (actor,true); " already wearing ", (ThatOrThose) x1, "!";
        4:  CSubjectVerb(actor,false,false,"put on",0,"puts on","put on"); " ", (the) x1, ".";
    }
! Yes:  see No.
];

! ==============================================================================

Constant LIBRARY_ENGLISH;       ! for dependency checking.
#Endif;

! ==============================================================================
