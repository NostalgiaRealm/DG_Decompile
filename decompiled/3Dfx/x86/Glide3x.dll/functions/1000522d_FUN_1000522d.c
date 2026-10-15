/*
 * FUN_1000522d at 1000522d
 * undefined1 __fastcall FUN_1000522d(int param_1)
 * Address ranges: 1000522d-1000529a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1000522d(int param_1)

{
  char cVar1;
  WNDPROC pWVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0x3e) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x3f) = 0;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    pWVar2 = FUN_10002bb5();
    *(WNDPROC *)(param_1 + 0x1c) = pWVar2;
    if (pWVar2 != (WNDPROC)0x0) {
      pWVar2 = FUN_10002bb5();
      if (pWVar2 != (WNDPROC)0x0) {
        pcVar4 = pWVar2 + 0x9c;
        puVar5 = &DAT_1005b504;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          puVar5 = puVar5 + 1;
        }
        FUN_10002c3a((undefined4 *)pWVar2);
      }
      cVar1 = FUN_1000403e();
      if (cVar1 != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x7bb) = 1;
      }
      *(undefined1 *)(param_1 + 0x3e) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x3e);
}

