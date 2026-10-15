/*
 * FUN_180091fa8 at 180091fa8
 * undefined FUN_180091fa8(void)
 * Address ranges: 180091fa8-1800921df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180091fa8(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0 [6];
  undefined1 auStack_b8 [28];
  short local_9c;
  short local_9a;
  undefined1 auStack_80 [64];
  
  iVar1 = (*__imp_USER32_dll_IsRectEmpty)(in_x7);
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(param_3 + 0x14) + 0x50))(*(longlong **)(param_3 + 0x14),auStack_b8)
    ;
    local_d8 = *(undefined4 *)(param_1 + 0x24);
    uStack_d4 = *(undefined4 *)(param_1 + 0x28);
    local_e0 = 0;
    iVar1 = (*__imp_USER32_dll_EqualRect)(&local_e0,in_x7);
    if ((((iVar1 == 0) || (local_9a != 1)) || (local_9c != 1)) &&
       ((*(int *)(param_1 + 0x44) - 3U < 2 || (*(int *)(param_1 + 0x44) == 5)))) {
      (**(code **)(**(longlong **)(param_2 + 0x14) + 0x50))
                (*(longlong **)(param_2 + 0x14),auStack_80);
    }
    func_0x0001801bad48(local_d0);
    FUN_18008e1b0(*(undefined8 *)(param_1 + 0x130),param_3,param_2,*(undefined8 *)(param_3 + 0x14),
                  *(undefined8 *)(param_2 + 0x14));
    (*__imp_USER32_dll_SetRectEmpty)(in_x7);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

