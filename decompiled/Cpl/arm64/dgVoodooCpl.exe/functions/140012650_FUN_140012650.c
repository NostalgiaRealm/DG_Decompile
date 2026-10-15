/*
 * FUN_140012650 at 140012650
 * undefined8 __cdecl FUN_140012650(longlong param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6)
 * Address ranges: 140012650-14001274f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140012650(longlong param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  FUN_140011fb8(param_1);
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < uVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_2);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                        (*(longlong **)(param_1 + 0x10),param_2);
      if (param_3 < uVar1) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                          (*(longlong **)(param_1 + 0x10),param_2);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                  (*(longlong **)(param_1 + 0x10),&local_50,uVar2,param_3,param_4,param_5);
        *param_6 = local_50;
        param_6[1] = uStack_4c;
        param_6[2] = local_48;
        param_6[3] = uStack_44;
        param_6[4] = local_40;
        return 1;
      }
    }
  }
  return 0;
}

