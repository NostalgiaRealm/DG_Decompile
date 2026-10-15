/*
 * FUN_18015c4e0 at 18015c4e0
 * undefined FUN_18015c4e0(void)
 * Address ranges: 18015c4e0-18015c587;18015c5e4-18015c62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015c4e0(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) != '\0') {
    iVar1 = (param_3 - param_2) * 0x10;
    lVar2 = FUN_1802218b0(lVar5 + 0x12c0);
    if (lVar2 != 0) {
      FUN_1801042e0(lVar5 + 0x14c0);
      uVar4 = lVar2 + 0x2fU & 0xfffffffffffffff8;
      *(ulonglong *)(lVar2 + 8) = (ulonglong)(iVar1 + 0x18);
      *(longlong *)(lVar2 + 0x18) = param_1;
      *(int *)(lVar2 + 0x20) = param_2;
      *(int *)(lVar2 + 0x24) = param_3;
      *(ulonglong *)(lVar2 + 0x10) = uVar4;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(uVar4,param_4,iVar1);
    }
    FUN_180221bb0(lVar5 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar5 + 0x12c0);
  }
  puVar3 = *(undefined8 **)(lVar5 + 0x14a0);
  *puVar3 = param_4;
  puVar3[1] = param_1;
  *(int *)(puVar3 + 2) = param_2;
  *(int *)((longlong)puVar3 + 0x14) = param_3;
  FUN_18015c638();
  FUN_180221bb0(lVar5 + 0x12c0);
  return;
}

