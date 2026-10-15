/*
 * FUN_10012926 at 10012926
 * undefined1 __fastcall FUN_10012926(int param_1)
 * Address ranges: 10012926-100129d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10012926(int param_1)

{
  WNDPROC pWVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_24 [8];
  
  if (*(char *)(param_1 + 0x3e) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x3f) = 0;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    pWVar1 = FUN_10002e21();
    *(WNDPROC *)(param_1 + 0x1c) = pWVar1;
    if (pWVar1 != (WNDPROC)0x0) {
      pWVar1 = FUN_10002e21();
      if (pWVar1 != (WNDPROC)0x0) {
        pcVar5 = pWVar1 + 0x9c;
        puVar2 = &DAT_1005944c;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar2 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          puVar2 = puVar2 + 1;
        }
        FUN_10002ea6((undefined4 *)pWVar1);
      }
      puVar2 = FUN_10014bb4(local_24);
      puVar6 = (undefined4 *)(param_1 + 0x5c);
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      piVar3 = (int *)FUN_1004f643(0x31000);
      *(int **)(param_1 + 0x5c) = piVar3;
      if (piVar3 == (int *)0x0) {
        FUN_1004f626((LPVOID)0x0);
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      else {
        FUN_100501d1(piVar3,0,0x31000);
      }
      *(undefined1 *)(param_1 + 0x3e) = 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x3e);
}

