/*
 * FUN_180059660 at 180059660
 * ulonglong __fastcall FUN_180059660(longlong param_1, int * param_2)
 * Address ranges: 180059660-180059723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180059660(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  lVar2 = thunk_FUN_1800fbccc(0x20000);
  *(longlong *)(param_1 + 0x20) = lVar2;
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar2 = thunk_FUN_1800fbccc(0x2000);
    *(longlong *)(param_1 + 0x28) = lVar2;
    if (lVar2 != 0) {
      *(char *)(param_1 + 0xaa) = (char)param_2[1];
      *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 5);
      *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)((longlong)param_2 + 6);
      *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)((longlong)param_2 + 7);
      iVar1 = *param_2;
      *(int *)(param_1 + 0xa0) = iVar1;
      *(int *)(param_1 + 0xa4) = iVar1 * 0x10 + 0x140;
      *(char *)(param_1 + 0xae) = (char)param_2[2];
      *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)((longlong)param_2 + 9);
      puVar4 = (undefined4 *)(param_1 + 0x30);
      for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      return 1;
    }
    uVar3 = FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return uVar3 & 0xffffffffffffff00;
}

