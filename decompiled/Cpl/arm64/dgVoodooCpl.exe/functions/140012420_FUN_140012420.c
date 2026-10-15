/*
 * FUN_140012420 at 140012420
 * undefined8 __cdecl FUN_140012420(longlong param_1, uint param_2, uint param_3, undefined8 * param_4)
 * Address ranges: 140012420-140012503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140012420(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 auStack_170 [8];
  undefined8 auStack_130 [32];
  undefined8 local_30;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < uVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_2);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                        (*(longlong **)(param_1 + 0x10),param_2);
      if (param_3 < uVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                  (*(longlong **)(param_1 + 0x10),auStack_170,param_2,param_3);
        thunk_FUN_140001000(param_4,auStack_170,0x40);
        thunk_FUN_140001000(param_4 + 8,auStack_130,0x100);
        param_4[0x28] = local_30;
        return 1;
      }
    }
  }
  return 0;
}

