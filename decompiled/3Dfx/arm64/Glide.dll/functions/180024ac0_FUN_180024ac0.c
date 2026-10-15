/*
 * FUN_180024ac0 at 180024ac0
 * undefined8 __cdecl FUN_180024ac0(longlong * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 180024ac0-180024be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180024ac0(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             uint param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_70 [8];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uStack_60 = 0;
  local_68 = 0;
  local_58 = 0;
  uVar3 = 0;
  uVar2 = FUN_1800245c8(param_1,0,param_2,0,0,'\0',(longlong)auStack_70,1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_180022b98(uStack_60._4_4_,param_2 == 2);
    if (7 < uVar2) {
      if ((int)local_58 == 0) {
        iVar1 = (int)uStack_60;
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar2 >> 3) * param_3) + (ulonglong)(uint)((int)uStack_60 * param_4)
                 + local_68);
        if (param_6 != 0) {
          do {
            thunk_FUN_180001218(param_8,puVar4,(ulonglong)((uVar2 >> 3) * param_5));
            puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)iVar1);
            param_6 = param_6 + -1;
            param_8 = (undefined8 *)((longlong)param_8 + (ulonglong)param_7);
          } while (param_6 != 0);
        }
      }
      uVar3 = 1;
    }
    FUN_180024820(param_1,0,param_2,0,0,0,0,0,0);
  }
  return uVar3;
}

