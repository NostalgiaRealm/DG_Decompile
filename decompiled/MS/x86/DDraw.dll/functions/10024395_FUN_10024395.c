/*
 * FUN_10024395 at 10024395
 * undefined __fastcall FUN_10024395(void * param_1)
 * Address ranges: 10024395-10024536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024395(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar2 = (int)param_1 + 0x154;
  if (param_1 == (void *)0x0) {
    iVar2 = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)param_1 + 0x15c) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0x158) + uVar3 * 4) + 4))(iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)param_1 + 0x15c));
  }
  uVar3 = 0;
  if (*(int *)((int)param_1 + 0x110) != 0) {
    iVar2 = (int)param_1 + 0x10;
    if (param_1 == (void *)0x0) {
      iVar2 = 0;
    }
    do {
      (**(code **)(**(int **)((int)param_1 + 0x118) + 100))
                (*(undefined4 *)(*(int *)((int)param_1 + 0x10c) + uVar3 * 4));
      FUN_1005e6d5(*(HWND *)(*(int *)((int)param_1 + 0x10c) + uVar3 * 4),iVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)param_1 + 0x110));
  }
  thunk_FUN_10060be1(*(LPVOID *)((int)param_1 + 0x10c));
  bVar4 = DAT_1006c204 != 0;
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  *(undefined4 *)((int)param_1 + 0x114) = 0;
  if (bVar4) {
    FUN_10001a12(-(uint)(param_1 != (void *)0x0) & (int)param_1 + 0x38U);
  }
  iVar2 = DAT_1006c210;
  piVar1 = (int *)(DAT_1006c210 + 0x308);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_1005e164(iVar2);
  }
  if ((*(char *)((int)param_1 + 0x36) != '\0') &&
     (DAT_1006c228 = DAT_1006c228 + -1, DAT_1006c228 == 0)) {
    UnregisterClassA((LPCSTR)(uint)DAT_1006c220,DAT_1006c250);
    DAT_1006c220 = 0;
  }
  if (*(int *)((int)param_1 + 0x118) != 0) {
    iVar2 = FUN_1000202b(*(int *)((int)param_1 + 0x11c));
    if (iVar2 == 1) {
      FUN_10025286(param_1,0);
      FUN_10025286(param_1,1);
    }
    FUN_10001f5d(*(int *)((int)param_1 + 0x11c));
    *(undefined4 *)((int)param_1 + 0x118) = 0;
  }
  FUN_10003225();
  FUN_100032b7();
  FUN_10029afd('\0');
  FUN_10004462();
  return;
}

