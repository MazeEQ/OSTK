#pragma once

#include <stdarg.h>
#include "mmo.h"

extern unsigned int groups[MAX_GROUPS][MAX_GROUP_MEMBERS];
extern unsigned char* objectFlags;

enum { ALL_CLIENT, SAMESRV, SAMEMAP, SAMEMAP_WOS, AREA, AREA_WOS, SAMEAREA, SAMEAREA_WOS, CORNER, SELF };
enum { LOOK_GET, LOOK_SEND };

#define META_MAX 20

//int clif_sendguidelist(USER*);
//int clif_sendguidespecific(USER*);
//int CheckProximity(point one, point two); //New
int clif_sendurl(USER*, int, const char*);
int clif_blockmovement(USER*, int);
int clif_send_pc_health(USER*, int, int);
int clif_findspell_pos(USER*, int);
int clif_calc_critical(USER*, struct block_list* bl);
int clif_has_aethers(USER*, int);
int clif_send_sub(struct block_list*, va_list);
int clif_send(unsigned char*, int, struct block_list*, int);
void clif_send_timer(USER*, char, unsigned int);
int clif_sendtogm(unsigned char*, int, struct block_list*, int);
int clif_inventory_popup(USER *sd, int slot, const char *body);
int clif_cnpclook_sub(struct block_list*, va_list);
int clif_cmoblook_sub(struct block_list*, va_list);
int clif_charlook_sub(struct block_list*, va_list);
int clif_guitext(struct block_list*, va_list);
int clif_guitextsd(const char*, USER*);
int clif_isregistered(unsigned int);

int clif_parseClanBankWithdraw(USER*);

int clif_getLevelTNL(USER*);
float clif_getXPBarPercent(USER*);

void clif_MobItmUpdate();

int clif_show_ghost(USER*, USER*);
int clif_mob_look_start(USER*);
int clif_mob_look_close(USER*);
int clif_npc_move(struct block_list*, va_list);
int clif_mob_move(struct block_list*, va_list);
int clif_mob_damage(USER*, MOB*);
int clif_send_mob_health(MOB*, int, int);
int clif_mob_kill(MOB*);
int clif_send_destroy(struct block_list*, va_list);
int clif_huntertoggle(USER*);
int clif_sendtest(USER*);
int clif_sendmob_action(MOB*, int, int, int);
int clif_sendmob_side(MOB*);

int clif_removespell(USER*, int);
int clif_popup(USER*, const char*);
int clif_sendweather(USER*);
int clif_object_canmove(int, int, int, int);

int clif_groupexp(USER*, unsigned int);
//send func
int clif_isignore(USER*, USER*);
int clif_parselookat_scriptsub(USER*, struct block_list*);
int clif_sendanimation(struct block_list*, va_list);
int clif_sendanimation_xy(struct block_list*, va_list);
int clif_sendequip(USER*, int);
int clif_sendadditem(USER*, int);
int clif_senddelitem(USER*, int, int);
int clif_sendminitext(USER*, const char*);
int clif_sendwisp(USER*, const char*, const char*);
int clif_retrwisp(USER*, char*, char*);
int clif_failwisp(USER*);
int clif_sendsay(USER*, char*, int, int);
int clif_sendmsg(USER*, int, const char*);
int clif_sendack(USER*);
int clif_retrieveprofile(USER*);
int clif_sendtime(USER*);
int clif_sendid(USER*);
int clif_sendmapinfo(USER*);
int clif_sendxy(USER*);
int clif_sendxynoclick(USER*);
int clif_sendxychange(USER*, int, int);
int clif_sendstatus(USER*, int);
int clif_sendstatus2(USER*);
int clif_sendoptions(USER*);
int clif_sendupdatestatus(USER*);
int clif_sendmapdata(USER*, int, int, int, int, int, unsigned short);
int clif_sendside(struct block_list*);
int clif_quit(USER*);
int clif_spawn(USER*);
int clif_getchararea(USER*);
int clif_getitemarea(USER*);
int clif_sendchararea(USER*);
int clif_sendaction(struct block_list*, int, int, int);
int clif_lookgone(struct block_list*);
int clif_broadcast(const char*, int);
int clif_broadcast_sub(struct block_list*, va_list);
int clif_gmbroadcast(const char*, int);
int clif_gmbroadcast_sub(struct block_list*, va_list);
int clif_broadcasttogm(const char*, int);
int clif_broadcasttogm_sub(struct block_list*, va_list);
int clif_timeout(int);
int clif_sendstatus3(USER*);
int clif_object_look_specific(USER*, unsigned int);
void clif_send_selfbar(USER*);
void clif_send_groupbars(USER*, USER*);
int clif_send_mobbars(struct block_list*, va_list);
void clif_intcheck(int, int, int);

//parse func
int clif_parsechangepos(USER*);
int clif_parseattack(USER*);
int clif_parsewisp(USER*);
int clif_parseside(USER*);
int clif_parseranking(USER*, int);
int clif_sendRewardInfo(USER*, int);
int clif_parsewalk(USER*);
int clif_noparsewalk(USER*, char);
int clif_parseemotion(USER*);
int clif_parsemap(USER*);
int clif_parsesay(USER*);
int clif_parsegetitem(USER*);
int clif_parsedropitem(USER*);
int clif_parseuseitem(USER*);
int clif_parseunequip(USER*);
int clif_refresh(USER*);
int clif_refreshnoclick(USER*);
int clif_parseparcel(USER*);
int clif_destroyold(USER*);
int clif_sendbluemessage(USER*, char*);
int clif_mob_look_start_func(struct block_list*, va_list);
int clif_mob_look_close_func(struct block_list*, va_list);
int clif_mob_look_sub(struct block_list*, va_list);
int clif_object_look_sub(struct block_list*, va_list);
int clif_object_look_sub2(struct block_list*, va_list);
//script func
int clif_throwitem_script(USER*);
int clif_scriptmes(USER*, int, const char*, int, int);
int clif_accept(int);
int clif_parse(int);
int clif_scriptmenu(USER*, int, char*, char* [], int);
int clif_scriptmenuseq(USER*, int, const char*, const char* [], int, int, int);
int clif_hairfacemenu(USER*, char*, char* [], int);
int clif_parsemenu(USER*);
int clif_sendmagic(USER*, int);
int clif_parsemagic(USER*);
int clif_mystaytus(USER*);
int clif_send_aether(USER*, int, int);
int clif_pc_damage(USER*, USER*);
int clif_updatestate(struct block_list*, va_list);
int clif_sendtowns(USER*);
int clif_sendheartbeat(int, int);
int clif_sendnpcsay(struct block_list*, va_list);
int clif_sendmobsay(struct block_list*, va_list);
int clif_sendnpcyell(struct block_list*, va_list);
int clif_sendmobyell(struct block_list*, va_list);
int clif_speak(struct block_list*, va_list);
int clif_parsebuy(USER*);
int clif_playsound(struct block_list*, int);
int clif_handle_disconnect(USER*);
int clif_mapselect(USER*, const char*, int*, int*, const char**, unsigned int*, int*, int*, int);
int clif_deductweapon(USER*, int);
int clif_deductarmor(USER*, int);
int clif_deductdura(USER*, int, int);
int clif_checkdura(USER*, int);
int clif_sendpowerboard(USER*);
int clif_cancelafk(USER*);
int clif_Hacker(char* name, const char* reason);

void filler_block(int pos, int eventid, int fd, USER *sd);
void retrieveEventDates(int eventid, int pos, int fd);
int checkPlayerScore(int eventid, int fd, USER *sd);
void updateRanks(int eventid, int fd);
int checkPlayerRank(int eventid, int fd, USER *sd);
int checkevent_claim(int eventid, int fd, USER *sd);
void dateevent_block(int pos, int eventid, int fd, USER *sd);
int gettotalscores(int eventid, int fd);
int getevents(int fd);
int getevent_name(int pos, int fd, USER *sd);
int getevent_playerscores(int eventid, int totalscores, int pos, int fd);
int clif_debug(unsigned char* stringthing, int len);
int clif_grouphealth_update(USER* sd);
int clif_pushback(USER* sd);
int clif_sendanimations(USER* src, USER* sd);
int clif_isingroup(USER* sd, USER* tsd);
int clif_exchange_message(USER* sd, char* message, int type, int extra);
int clif_exchange_finalize(USER* sd, USER* tsd);
int clif_exchange_cleanup(USER* sd);
int clif_exchange_close(USER* sd);
int clif_exchange_money(USER* sd, USER* tsd);
int clif_exchange_sendok(USER* sd, USER* tsd);
int clif_startexchange(USER* sd, unsigned int target);
int clif_exchange_additem(USER* sd, USER* tsd, int id, int amount);
int clif_leavegroup(USER* sd);
int clif_updategroup(USER* sd, char* message);
int clif_sendhunternote(USER* sd);
int clif_groupstatus(USER* sd);
int clif_parse_exchange(USER* sd);
int clif_postitem(USER* sd);
int clif_handgold(USER* sd);
int clif_handitem(USER* sd);
int clif_changestatus(USER* sd, int type);
int clif_addgroup(USER* sd);
int clif_showboards(USER* sd);
int clif_parseinput(USER* sd);
int clif_parsesell(USER* sd);
int clif_clickonplayer(USER* sd, struct block_list* bl);
int clif_object_canmove_from(int m, int x, int y, int side);
int clif_unequipit(USER* sd, int spot);
int clif_send_duration(USER* sd, int id, int time, USER* tsd);
int clif_sendupdatestatus_onequip(USER* sd);
int clif_transfer(USER* sd, int serverid, int m, int x, int y);
int clif_transfer_test(USER* sd, int m, int x, int y);
int clif_deductduraequip(USER* sd);
int clif_checkinvbod(USER* sd);
int getclifslotfromequiptype(int equipType);
int clif_send_pc_healthscript(USER* sd, int damage, int critical);
int clif_sendscriptsay(USER* sd, const char* msg, int msglen, int type);
char* clif_getaccountemail(unsigned int id);
int clif_sendminimap(USER* sd);
int clif_selldialog(USER* sd, unsigned int id, const char* dialog, int item[], int count);
int clif_input(USER* sd, int id, const char* dialog, const char* item);
int clif_buydialog(USER* sd, unsigned int id, const char* dialog, struct item* item, int price[], int count);
int clif_paperpopupwrite(USER* sd, const char* buf, int width, int height, int invslot);
int clif_paperpopup(USER* sd, const char* buf, int width, int height);
int clif_inputseq(USER* sd, int id, const char* dialog, const char* dialog2, const char* dialog3, const char* menu[], int size, int previous, int next);
int clif_sendBoardQuestionaire(USER* sd, struct board_questionaire q[], int count);
int clif_send_mob_healthscript(MOB* mob, int damage, int critical);

// Map server has it's own version of send_meta with different signature. Nice.
int send_metalist(USER* sd);
int send_meta(USER* sd);

int createdb_start(USER *sd);

//int clif_refreshfix(USER*);
//int clif_loadregistry();
//int clif_saveregistry(struct global_reg*, int, const char*);
//int clif_setglobalreg(char*,int);
//int clif_readglobalreg(char*);
int tk_encrypt(int);
int decrypt(int);
