/*
 * FUN_180018b50 at 180018b50
 * undefined8 __cdecl FUN_180018b50(longlong * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 180018b50-180018c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180018b50(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             uint param_7,undefined8 *param_8)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_70 [8];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uStack_60 = 0;
  local_68 = 0;
  local_58 = 0;
  uVar4 = 0;
  bVar2 = FUN_1800184b0(param_1,0,param_2,0,0,'\0',(longlong)auStack_70,1);
  if ((bVar2 & 1) != 0) {
    uVar3 = FUN_180016028(uStack_60._4_4_,param_2 == 7 || param_2 == 2);
    if (7 < uVar3) {
      if ((int)local_58 == 0) {
        iVar1 = (int)uStack_60;
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar3 >> 3) * param_3) + (ulonglong)(uint)((int)uStack_60 * param_4)
                 + local_68);
        if (param_6 != 0) {
          do {
            thunk_FUN_1800010d8(param_8,puVar5,(ulonglong)((uVar3 >> 3) * param_5));
            puVar5 = (undefined8 *)((longlong)puVar5 + (longlong)iVar1);
            param_6 = param_6 + -1;
            param_8 = (undefined8 *)((longlong)param_8 + (ulonglong)param_7);
          } while (param_6 != 0);
        }
      }
      uVar4 = 1;
    }
    FUN_1800186c8(param_1,0,param_2,0,0,0,0,0,0);
  }
  return uVar4;
}

