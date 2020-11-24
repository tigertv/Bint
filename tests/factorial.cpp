#include <iostream>
#include <string>
#include <cassert>
#include <map>
#include "../Bint.h"
#include "../Math.h"
#include <chrono>

using namespace TigerTV;


int main() {
	Bint a;

std::string s = "18288019515140650133147431755739190442173777107304392197064526954208959797973177364850370286870484107336443041569285571754672461861543557333942615617956996716745284831597317498818760937482804980419576512948720610558928129788097800620593429537705326740624453884285091743951756746144447362378722469436194575929579900114212973360658998073977714697261205048663725936337490404066097966637170254021348800944280342285355946649681316260163459743803577175903394733170076841764779082166891184529324230033414145497801832598218518406552257097392530024582738982919104406782168708871495603501905867399966298798534877747923179195791416504408054878974770308650707120878837624986576073340449414854578367383301715706358194127400849855604080473305196833482408079420964275187538889115296655522397723924887154624810659788321005620558369604778657904771918388054319251513981954296741688447246185021250402225010116433016818588036690180177691461779713104301640395708274734701186772756966064611023656528765138735704190876200697145804692125236821066805337175220605745377557452592208653939853278523841448314026548802309860391087939783218946129582647928430739985554883806198749831633640196211202756086016039171607744078776876219661603702759454887945247605749205543464095883664514960293873244842409803801480566600124415293789831496309554117113888561569494314926134470477513516416560102984058751906208865570183683850791317395702861350821464653600469443279077733978568711404244774089509216727922510660941411716412467443445414001188915966547283773988670739792818897314762082568914041952211779194055311405259158538932388745292324386826830135904886472292289993848482289254307628467614523292519222687689180219788377184005246290896703260524910362136627321135976515358528150143796798116836263053229733971612275184896139539613129329008449214723196703789119820971205922195513915546814704778682373487718946560822811623038853887054357316290622378472322045316639418491798517077275839637525427601452961835674484434498885698840692468550825765131610925966585339561854456154229048295742274725126218799745448031391826295221114381890600683208441558088271228618006589059444108806652992787854634497487158675770983422610936590600627170500972481399444145398522756870626097250230229195799277299921844954715690883242553569256657132515663544931830393317518828986443942138971609142621397646808351809694603734872977984148002699965137870448199866167162949256435040416146886823942144459105175033488395869910405207521329016842673168563837531518918339627724066152933627236730561155418227888673513937454508103826102827706121560330906016404162420051373313654570111102003319577878502216919170112074608722852376799943191590480651623958062982829452035227119036502426583752512199824089725611711059153935434418985109241404135069047109527514730648502064630431371185922523036941621026392783813435540195800531988645430344745298845640017082732623248838473771603478336326662579219137601422632057648758807935233915527562817942378675243919886800056209434731407685691942327092464101136254795499159351103542747723434544436366313104996373661654989465498180892716462805042227038222104784062626027480151567377841821316292095295686368619300417863327530764301323081902435971165925163513225511176258919471673437553320934916910573999020966087207663133871516530391787535755420348174519954013015999193335205032571176460105005716115305748669364682675265014310223271762807620242805617435594927890676408953057384890719681225840400396698155624793888816156585043604782961704971397764959404751358445856914581957186533573207690355894150776647727994156425641953755517727965486096675384222232344185537279888780570854092084221993660761154788359777439798490851148031275123759286793224660188593768897291749180357297185650430735063126035278321749629995702200115722386600046772883018963166273463715186812543356173550341233310175600817771447170656517505385258772069067139665478506263898380526394388218036388768999161538645432932116471146392562992204259450889291928261780531925618148311151259088519869787637913607866079920830781433275298468534248595471485354420794089854693167644320115900404444471266030942746376074187982809857292874382829734306879420308783010740784767155894363033186129183748698373599293267795620690003900348542140553208244771165593739117369452474295075445169488356550100854423929030967163401348223503674045821834526710830392520955478859202303175309815706259592416130388770535449570146586161954289529234209342432075461261173246383180702862172009624828852517861214008242944903162464816939278645210656431141653019224783906038062818006434258491952705341708781231767324026544165240012431457995565227331912056216396141277926932316783631899833106810492890045890947294731794016389385348294079360921757589715698098491612254898203787546124091057862387229987442131738499764391062422228395736099751277880661280909246369674792326056952220508861243875642482808175793303703933394191224832165950388337931626643339913192088808753619030386928808349931733881036690498513779587801764477865791351420222949860738228995728065763459283625096944678593378349990211317403358327367677358882377095918185840441346045760435580063918587956888086127034558064154832456098224664532422114583653763989534559801683261113731162039500068729224661509382267286483841867542303955164213391663536072749966590737898408144092699675796793165775891429992491955485860639629542416955757565163223827874193321274119938618709482020627749094917473754346320653165690129809741806883246764053966717253521140010801409998318494470531219051920354752556183478378238398583402765337923843167749738355049636714529840534145950376598809459294819192486096200503652538835417613002983933634477053826438814791235363934440952835213240806543802505241445900981152753843778634021300832293332432473400040109754281828950625464331409151961292319287863535740382445771128522343533054993071872524564127962306298218521662304206610010638488461150361786151832595182055013210238035059473479841417644445066550217093994746959565730463201996845756999575031950401331385688683576883429289274419202816101239071817771853612534620088858074904095239406471009098851796038360101243053736361346640211872570375441319261567131238168652234864182359667285536913841122976956009892970909409178865928472056691904571596961458646895132972589012090613887584436018692038947475932753085268106507554394567201654757930957224629573401948677157237825005540282635839895509019254240256916422227590032685003087320017232658420681209681389364174854034319152111706246564733896551636271748411627920466475472421243033805492052542237647091252577811952376244836844025673570936216945539206875730684120187779664758451508678786539887154966732995692212544207529457534936853900663520665102592278581210192104846016594846265525000394264201946315492667174670489454576610993722063668720936949698308641684437046485292906040368218708947194882991333823400676584552108673913669306118549159369734833071319506680872661886898225398171896329288732499509337836463164384614967690283284184136334006184670970038275153458133098776493171693249836721707632973537518273692928527497068121779606865163943692606596848941143683627629169873171114739189794632775706536177409526869936538136348369630762610163490694986911903178859927739423796596582439105912599204583810744740479342404550513976713360591833475711496976836332005885151231030818986389033126325119226309584818058301429763149472903925739659774337307109687940297813700796873400566095281249251559137923743113469044584820584542770746490047535898370961450995287930441328833542933636539386097851378739174078158132593877463567524868470795313740375647059352650583871001646082364842709333314532933141725314262510333047099681128329792983694287727106008519184538377065089964546579000542260452715147077137452076302879112802094308224402060706282308208678850263037733351444756065285721900833083634023860920356321356382318484421995141074387149942542550133039926139155010190614633196727199469768170121209097613598302048321148497175007150184555423280152476407230065108963493864309805262458731715886593175689747530567359088332598961192319881186961400055356294945140450806114214490420494488195417136403967132286869444062615622815233336396279517485469862880809956041938378161336156979526713793454354319018535526139196959277008828634440008764782171726908279132449346924807112458895951881542382952497102061566169481361027449429416228859029591798532192088531772405831332410104172391828682208239266557146168642210154401086974397003647170356217905465594944933170065175291981240572835024374361017977695084363373226470846255498368067535698751768103817520605779489720985090002595078926475029239124403277040719184010486962844211160986922952144938430963756963408787147933184107904312838985994963982784496688190643908936394858404598837762653245968848299901455260080572627872653099337092686312650606546084656202210845053932679131706841390889951865628810708670194485207654079244417321332232196041180225814997707988397637369268804955010409293139079608620689856756139863786355461818276369292665568749282154818479663283704713663666842236273009790537968973379093662517795316051746410279831975339791651704861188979834156418998505732384020730350075052669695594594753081616632885311572351609352631187129393729557398993321794518158269658073683417584260274184235030846683698193879109933863561435059993549597333514217973995915742796206889856584584493875193805504685107321011420502217815128118404137521250590361329385146997427292035829509205811367395885622247504950811752188165627552137681095618860955664505372763469788466067973748736658759105548049054658237200096293754479296344115915560231138432518248450383276234795400180535655551222536669390799317067896797756236783441752907948891802488298281245615590113512482344591092230909649423933991714557108941323849548468680509335203770970493785006636718394242326057416155509029270066096293813080877339787718442773014833232754755736783313789547145535129557193581885962158684756484475219230828423777756012721234731368785218564362953263092286535139160440838713013861328416662947756104857391740722209360021068158824717926850831589591367302143596625426553706038593255843919505223140871543995210720444637571268651195165483531243799087083070940544241515809139594158704843980567202482856647644447362604252961907705738740354460336586792214638225365973993001974668174157206242597452556046629209551599663117912609702944345176608757619561247872050409609062772362769045711709729061066411540898769707847042980034982033351136308779676287974627667703893888026848748953201438481632037717854462054861859986684636917120883602793194058658599425778515519713798214407689849211487929150179918547200558584524139792439377469676039518101451697712860634235352474290575260172151562129240720796835619967878383018961055921622371480562682714603085506932806187937976625431071742833007749235636990700120567425836156233607547500827789537909071263596294926763891075439575973972560478399510790078797663071024149826759934524980569432847819403219226207098701759952415628476519584752248050578584198211799092030838909208236225141975964892778944163008811179723219354847713753084628828883321692575327835658786892010648865205021985527642612795652759365359359048052205587306960853879351302215329380382709288672566169552660197788055450054177652374955319992805345989662399494012874012278677451052584166987084866267245492968785684175508510910492913793478551456991152291522750377308973310200505007906906671435839262115546753934391579860133029544403932422271218975046896384482252108820546415274174791693426071019927278518520520164621127271231748277979659289204850823018535192067323372368224831050642902153626845618478009622824733150764188329304815843651352730897836727021023023627320228373645802602496000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; //4000!

	uint64_t d = 4000;
	std::cout << "factorial:" << std::endl;
	std::cout << "a = " << d << std::endl;
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	a = Math::fact(d);
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	
	assert(a.toString()==s);

	//std::cout << "a b1000 = " << a.base(1000) << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;
	std::cout << std::endl;

}
