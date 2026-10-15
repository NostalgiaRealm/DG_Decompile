/*
 * FUN_140010b10 at 140010b10
 * ulonglong __fastcall FUN_140010b10(longlong param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6)
 * Address ranges: 140010b10-140010bf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140010b10(longlong param_1,uint param_2,uint param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < (uint)in_RAX) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_2);
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                         (*(longlong **)(param_1 + 0x10),param_2);
      if (param_3 < (uint)in_RAX) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                          (*(longlong **)(param_1 + 0x10),param_2);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                  (*(longlong **)(param_1 + 0x10),&local_48,uVar1,param_3,param_4,param_5);
        *param_6 = local_48;
        param_6[1] = local_44;
        param_6[2] = local_40;
        param_6[3] = local_3c;
        param_6[4] = local_38;
        return CONCAT71((uint7)(uint3)((uint)local_38 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

