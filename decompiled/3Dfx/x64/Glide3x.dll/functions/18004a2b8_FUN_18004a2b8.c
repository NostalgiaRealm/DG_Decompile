/*
 * FUN_18004a2b8 at 18004a2b8
 * int __fastcall FUN_18004a2b8(longlong param_1, byte * param_2, longlong * param_3)
 * Address ranges: 18004a2b8-18004a474
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18004a2b8(longlong param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  *param_3 = 0;
  iVar1 = FUN_180060f70(param_2,&DAT_180062630,0x10);
  if (((((iVar1 == 0) || (iVar1 = FUN_180060f70(param_2,&DAT_180062520,0x10), iVar1 == 0)) ||
       (iVar1 = FUN_180060f70(param_2,&DAT_180062530,0x10), iVar1 == 0)) ||
      ((iVar1 = FUN_180060f70(param_2,&DAT_1800625f0,0x10), iVar1 == 0 ||
       (iVar1 = FUN_180060f70(param_2,&DAT_180062600,0x10), iVar1 == 0)))) ||
     (iVar1 = FUN_180060f70(param_2,&DAT_180062520,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
    return 0;
  }
  iVar1 = FUN_180060f70(param_2,&DAT_180062610,0x10);
  if (((((iVar1 != 0) || (*(int *)(param_1 + 0xb60) == 0)) &&
       ((iVar1 = FUN_180060f70(param_2,&DAT_180062620,0x10), iVar1 != 0 ||
        (*(uint *)(param_1 + 0xb60) < 2)))) &&
      ((iVar1 = FUN_180060f70(param_2,&DAT_180062550,0x10), iVar1 != 0 ||
       (*(uint *)(param_1 + 0xb60) < 3)))) &&
     (((iVar1 = FUN_180060f70(param_2,&DAT_180062560,0x10), iVar1 != 0 ||
       (*(uint *)(param_1 + 0xb60) < 4)) &&
      (((iVar1 = FUN_180060f70(param_2,&DAT_1800625b0,0x10), iVar1 != 0 ||
        (*(uint *)(param_1 + 0xb60) < 5)) &&
       ((iVar1 = FUN_180060f70(param_2,&DAT_1800625c0,0x10), iVar1 != 0 ||
        (*(uint *)(param_1 + 0xb60) < 6)))))))) {
    return -0x7fffbffe;
  }
  local_res18[0] = 0;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x688))
                    (*(undefined8 **)(param_1 + 0x688),param_2,local_res18);
  if (iVar1 < 0) {
    return iVar1;
  }
  *param_3 = param_1;
  return iVar1;
}

