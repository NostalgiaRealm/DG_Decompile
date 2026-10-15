/*
 * FUN_180023af8 at 180023af8
 * undefined8 __cdecl FUN_180023af8(longlong * param_1, int param_2, int param_3, uint param_4, uint param_5, int param_6, int param_7, int param_8, undefined8 * param_9, char param_10, byte param_11)
 * Address ranges: 180023af8-180023c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180023af8(longlong *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
             int param_7,int param_8,undefined8 *param_9,char param_10,byte param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [8];
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 0;
  uVar6 = 0;
  uVar1 = FUN_180023778(param_1,1,param_2,param_5,0,param_10,(longlong)auStack_78,1);
  if ((uVar1 & 1) != 0) {
    uVar3 = param_4;
    iVar4 = param_3;
    uVar1 = param_4;
    if (((uStack_68._4_4_ == param_5) && ((int)local_60 == 0)) &&
       (uVar2 = FUN_180021d48(uStack_68._4_4_,param_2 == 2), 7 < uVar2)) {
      iVar4 = param_3 + param_6;
      if (param_8 < 0) {
        uVar1 = -~param_4;
        uVar3 = uVar1 - param_7;
        param_4 = *(int *)((longlong)param_1 + 0xac) + ~param_4;
        iVar5 = -(int)uStack_68;
      }
      else {
        uVar1 = param_4 + param_7;
        iVar5 = (int)uStack_68;
      }
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 >> 3) * param_3) + (ulonglong)((int)uStack_68 * param_4) +
               local_70);
      if (param_7 != 0) {
        do {
          thunk_FUN_180001218(puVar7,param_9,(ulonglong)((uVar2 >> 3) * param_6));
          param_9 = (undefined8 *)((longlong)param_9 + (longlong)param_8);
          param_7 = param_7 + -1;
          puVar7 = (undefined8 *)((longlong)puVar7 + (longlong)iVar5);
        } while (param_7 != 0);
      }
      uVar6 = 1;
    }
    FUN_1800239d0(param_1,1,param_2,0,param_3,uVar3,iVar4,uVar1,param_11);
  }
  return uVar6;
}

