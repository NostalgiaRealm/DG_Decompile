/*
 * FUN_10027015 at 10027015
 * bool __fastcall FUN_10027015(int param_1)
 * Address ranges: 10027015-100270d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool __fastcall FUN_10027015(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int local_1004 [1023];
  undefined4 uStack_8;
  
  uStack_8 = 0x10027022;
  iVar1 = *(int *)(param_1 + 0x3018);
  iVar2 = *(int *)(iVar1 + 0x3188);
  piVar4 = FUN_1003bd3e((void *)(*(int *)(iVar1 + 0x3180) + 0x520),*(int **)(iVar1 + 0x3184),0xf000,
                        0,0);
  *(int **)(param_1 + 0x3020) = piVar4;
  uVar5 = 0;
  do {
    FUN_1002bdf7(local_1004,uVar5);
    bVar3 = FUN_1003ef39(*(void **)(iVar2 + 0x130c),*(int **)(param_1 + 0x3020),
                         (void *)(iVar2 + 0x1430),uVar5 * 0x1000,uVar5 * 0x1000 + 0x1000,local_1004,
                         '\0','\0');
    if (!bVar3) break;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xf);
  FUN_1003d280((void *)(*(int *)(iVar2 + 0x130c) + 4),'\0');
  if (uVar5 != 0xf) {
    FUN_1003ba29(*(void **)(*(int *)(param_1 + 0x3018) + 0x3180),*(int **)(param_1 + 0x3020));
  }
  return uVar5 == 0xf;
}

