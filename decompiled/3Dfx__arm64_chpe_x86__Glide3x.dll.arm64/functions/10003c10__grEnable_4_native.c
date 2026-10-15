/*
 * _grEnable@4_native at 10003c10
 * undefined _grEnable@4_native(void)
 * Address ranges: 10003c10-10003d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grEnable_4_native(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar3 = FUN_100093b8();
  uVar5 = FUN_10009430(iVar3);
  if ((uVar5 & 1) != 0) {
    switch(param_1) {
    case 4:
      *(undefined1 *)(iVar3 + 0x58) = 1;
      break;
    case 6:
      iVar4 = FUN_1000ae88(iVar3);
      if (((&DAT_100a23f1)[iVar4 * 0x18] != '\0') && (piVar1 = (int *)(iVar3 + 0xc), *piVar1 != 0))
      {
        piVar2 = (int *)(iVar3 + 0x1c);
        iVar3 = 0;
        if (0 < *(int *)(*piVar2 + 0x797)) {
          do {
            *(undefined4 *)(*piVar1 + iVar3 * 0x4e8 + 0x31c) = 0;
            iVar4 = iVar3 * 0x4e8;
            iVar3 = iVar3 + 1;
            *(int *)(*piVar1 + iVar4 + 800) = *(int *)(*piVar2 + 0x797) * *(int *)(*piVar2 + 0x793);
          } while (iVar3 < *(int *)(*piVar2 + 0x797));
        }
      }
    }
  }
  return;
}

