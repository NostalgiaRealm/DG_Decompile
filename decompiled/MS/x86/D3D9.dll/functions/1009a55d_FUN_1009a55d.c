/*
 * FUN_1009a55d at 1009a55d
 * int __stdcall FUN_1009a55d(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1009a55d-1009a684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009a55d(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar4 = -0x7789f794;
  switch(param_2) {
  case (undefined4 *)0x4:
  case (undefined4 *)0x5:
  case (undefined4 *)0x6:
  case (undefined4 *)0x8:
  case (undefined4 *)0x9:
  case (undefined4 *)0xa:
  case (undefined4 *)0xb:
  case (undefined4 *)0xc:
  case (undefined4 *)0xd:
  case (undefined4 *)0xe:
  case (undefined4 *)0xf:
  case (undefined4 *)0x10:
  case (undefined4 *)0x11:
  case (undefined4 *)0x12:
    if ((((param_2 == (undefined4 *)&DAT_00000008) || (param_2 == (undefined4 *)0x9)) ||
        (param_2 == (undefined4 *)0xa)) ||
       ((param_2 == (undefined4 *)0xb || (param_2 == (undefined4 *)0xc)))) {
      iVar4 = 0;
      if (param_3 != (undefined4 *)0x0) {
        iVar4 = -0x7ff8fff2;
        puVar1 = FUN_1008f9f4((void *)(param_1 + -0x66b4),*(undefined4 *)(param_1 + -0x58c8),param_2
                             );
        param_2 = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[8] = 0;
          puVar1[9] = 0;
          iVar2 = (**(code **)(*(int *)puVar1[6] + 0x18))(puVar1[5]);
          puVar1[7] = iVar2;
          iVar4 = -0x7ff8fff2;
          if ((iVar2 != 0) &&
             ((uVar3 = FUN_10003d8f((void *)(param_1 + 0xe8),&param_2), puVar1 = param_2,
              (char)uVar3 == '\0' ||
              ((iVar4 = FUN_1009cb4f((int)param_2,0x100d13e0,param_3), iVar4 < 0 &&
               (FUN_10092202((void *)(param_1 + -0x66b4),(int)puVar1), iVar4 < 0)))))) {
            (**(code **)(*(int *)puVar1[7] + 4))();
            puVar1[7] = 0;
          }
          if ((iVar4 < 0) && (puVar1 != (undefined4 *)0x0)) {
            *puVar1 = &PTR_FUN_100d703c;
            FUN_100cfd6c(puVar1);
          }
        }
      }
    }
    else {
      iVar4 = -0x7789f796;
    }
  }
  FUN_10003e89(&local_5);
  return iVar4;
}

