/*
 * FUN_1001c4b0 at 1001c4b0
 * bool __fastcall FUN_1001c4b0(int param_1)
 * Address ranges: 1001c4b0-1001c574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool __fastcall FUN_1001c4b0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int local_1004 [1023];
  undefined4 uStack_8;
  
  uStack_8 = 0x1001c4bd;
  iVar1 = *(int *)(param_1 + 0x3018);
  iVar2 = *(int *)(iVar1 + 0x3688);
  piVar4 = FUN_1004189c((void *)(*(int *)(iVar1 + 0x3680) + 0x520),*(int **)(iVar1 + 0x3684),0x11000
                        ,0,0);
  *(int **)(param_1 + 0x3020) = piVar4;
  uVar5 = 0;
  do {
    FUN_1001f29f(local_1004,uVar5);
    bVar3 = FUN_10044a9a(*(void **)(iVar2 + 0x130c),*(int **)(param_1 + 0x3020),
                         (void *)(iVar2 + 0x1430),uVar5 * 0x1000,uVar5 * 0x1000 + 0x1000,local_1004,
                         '\0','\0');
    if (!bVar3) break;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x11);
  FUN_10042dde((void *)(*(int *)(iVar2 + 0x130c) + 4),'\0');
  if (uVar5 != 0x11) {
    FUN_10041587(*(void **)(*(int *)(param_1 + 0x3018) + 0x3680),*(int **)(param_1 + 0x3020));
  }
  return uVar5 == 0x11;
}

