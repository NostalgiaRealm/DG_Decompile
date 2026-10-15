/*
 * FUN_10026c8b at 10026c8b
 * bool __fastcall FUN_10026c8b(int param_1)
 * Address ranges: 10026c8b-10026d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool __fastcall FUN_10026c8b(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int local_1004 [1023];
  undefined4 uStack_8;
  
  uStack_8 = 0x10026c98;
  iVar1 = *(int *)(param_1 + 0x3018);
  iVar2 = *(int *)(iVar1 + 0x3188);
  piVar4 = FUN_1003b9ae((void *)(*(int *)(iVar1 + 0x3180) + 0x520),*(int **)(iVar1 + 0x3184),0xf000,
                        0,0);
  *(int **)(param_1 + 0x3020) = piVar4;
  uVar5 = 0;
  do {
    FUN_1002ba6d(local_1004,uVar5);
    bVar3 = FUN_1003eba9(*(void **)(iVar2 + 0x130c),*(int **)(param_1 + 0x3020),
                         (void *)(iVar2 + 0x1430),uVar5 * 0x1000,uVar5 * 0x1000 + 0x1000,local_1004,
                         '\0','\0');
    if (!bVar3) break;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xf);
  FUN_1003cef0((void *)(*(int *)(iVar2 + 0x130c) + 4),'\0');
  if (uVar5 != 0xf) {
    FUN_1003b699(*(void **)(*(int *)(param_1 + 0x3018) + 0x3180),*(int **)(param_1 + 0x3020));
  }
  return uVar5 == 0xf;
}

