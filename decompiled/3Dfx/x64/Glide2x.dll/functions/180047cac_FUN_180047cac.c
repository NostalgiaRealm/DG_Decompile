/*
 * FUN_180047cac at 180047cac
 * int __fastcall FUN_180047cac(longlong param_1, byte * param_2, longlong * param_3)
 * Address ranges: 180047cac-180047e68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180047cac(longlong param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  *param_3 = 0;
  iVar1 = FUN_18005f350(param_2,&DAT_180060630,0x10);
  if (((((iVar1 == 0) || (iVar1 = FUN_18005f350(param_2,&DAT_180060520,0x10), iVar1 == 0)) ||
       (iVar1 = FUN_18005f350(param_2,&DAT_180060530,0x10), iVar1 == 0)) ||
      ((iVar1 = FUN_18005f350(param_2,&DAT_1800605f0,0x10), iVar1 == 0 ||
       (iVar1 = FUN_18005f350(param_2,&DAT_180060600,0x10), iVar1 == 0)))) ||
     (iVar1 = FUN_18005f350(param_2,&DAT_180060520,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
    return 0;
  }
  iVar1 = FUN_18005f350(param_2,&DAT_180060610,0x10);
  if (((((iVar1 != 0) || (*(int *)(param_1 + 0xb60) == 0)) &&
       ((iVar1 = FUN_18005f350(param_2,&DAT_180060620,0x10), iVar1 != 0 ||
        (*(uint *)(param_1 + 0xb60) < 2)))) &&
      ((iVar1 = FUN_18005f350(param_2,&DAT_180060550,0x10), iVar1 != 0 ||
       (*(uint *)(param_1 + 0xb60) < 3)))) &&
     (((iVar1 = FUN_18005f350(param_2,&DAT_180060560,0x10), iVar1 != 0 ||
       (*(uint *)(param_1 + 0xb60) < 4)) &&
      (((iVar1 = FUN_18005f350(param_2,&DAT_1800605b0,0x10), iVar1 != 0 ||
        (*(uint *)(param_1 + 0xb60) < 5)) &&
       ((iVar1 = FUN_18005f350(param_2,&DAT_1800605c0,0x10), iVar1 != 0 ||
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

