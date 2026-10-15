/*
 * FUN_18002276c at 18002276c
 * undefined8 __fastcall FUN_18002276c(longlong * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 18002276c-180022885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18002276c(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             uint param_7,undefined8 *param_8)

{
  char cVar1;
  uint uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_50 = 0;
  uVar5 = 0;
  local_60 = 0;
  uStack_58 = 0;
  cVar1 = FUN_1800223d8(param_1,0,param_2,0,0,'\0',(longlong)local_68,'\x01');
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    uVar2 = FUN_180020da4(uStack_58._4_4_,param_2 == 2);
    if (7 < uVar2) {
      if ((int)local_50 == 0) {
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar2 >> 3) * param_3) +
                 (ulonglong)(uint)((int)uStack_58 * param_4) + local_60);
        if (param_6 != 0) {
          lVar6 = (longlong)(int)uStack_58;
          do {
            FUN_18005f1b0(param_8,puVar4,(ulonglong)((uVar2 >> 3) * param_5));
            puVar4 = (undefined8 *)((longlong)puVar4 + lVar6);
            param_8 = (undefined8 *)((longlong)param_8 + (ulonglong)param_7);
            param_6 = param_6 + -1;
          } while (param_6 != 0);
        }
      }
      uVar5 = 1;
    }
    FUN_1800224cc(param_1,0,param_2,0,0,0,0,0,0);
    uVar3 = extraout_var_00;
  }
  return CONCAT71(uVar3,uVar5);
}

