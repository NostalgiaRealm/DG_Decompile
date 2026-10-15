/*
 * FUN_1800225b0 at 1800225b0
 * undefined8 __fastcall FUN_1800225b0(longlong * param_1, int param_2, int param_3, uint param_4, DWORD param_5, int param_6, int param_7, int param_8, undefined8 * param_9, char param_10, undefined1 param_11)
 * Address ranges: 1800225b0-18002276a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800225b0(longlong *param_1,int param_2,int param_3,uint param_4,DWORD param_5,int param_6,
             int param_7,int param_8,undefined8 *param_9,char param_10,undefined1 param_11)

{
  char cVar1;
  uint uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar9;
  int iVar10;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 uVar8;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar8 = 0;
  uVar7 = 0;
  cVar1 = FUN_1800223d8(param_1,1,param_2,param_5,0,param_10,(longlong)local_60,'\x01');
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    iVar10 = param_3;
    uVar5 = param_4;
    uVar6 = param_4;
    uVar7 = uVar8;
    if (((uStack_50._4_4_ == param_5) && ((int)local_48 == 0)) &&
       (uVar2 = FUN_180020da4(uStack_50._4_4_,param_2 == 2), 7 < uVar2)) {
      iVar10 = param_3 + param_6;
      if (param_8 < 0) {
        uVar5 = ~param_4;
        param_4 = *(int *)((longlong)param_1 + 0xac) + uVar5;
        uVar5 = -uVar5;
        iVar9 = -(int)uStack_50;
        uVar6 = uVar5 - param_7;
      }
      else {
        uVar5 = param_4 + param_7;
        iVar9 = (int)uStack_50;
      }
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar2 >> 3) * param_3) +
               (ulonglong)((int)uStack_50 * param_4) + local_58);
      if (param_7 != 0) {
        do {
          FUN_18005f1b0(puVar4,param_9,(ulonglong)((uVar2 >> 3) * param_6));
          param_9 = (undefined8 *)((longlong)param_9 + (longlong)param_8);
          puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)iVar9);
          param_7 = param_7 + -1;
        } while (param_7 != 0);
      }
      uVar7 = 1;
    }
    FUN_1800224cc(param_1,1,param_2,0,param_3,uVar6,iVar10,uVar5,param_11);
    uVar3 = extraout_var_00;
  }
  return CONCAT71(uVar3,uVar7);
}

