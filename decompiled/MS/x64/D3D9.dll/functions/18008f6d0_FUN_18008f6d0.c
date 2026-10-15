/*
 * FUN_18008f6d0 at 18008f6d0
 * bool __fastcall FUN_18008f6d0(longlong param_1)
 * Address ranges: 18008f6d0-18008f88f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18008f6d0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 local_48;
  int local_44;
  int local_38;
  
  *(undefined1 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x44) - 3U < 3) {
    FUN_1800ac794(param_1,(undefined8 *)&local_48);
    plVar1 = (longlong *)(param_1 + 0x60);
    uVar2 = *(uint *)(param_1 + 0x34);
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar6 = (ulonglong)uVar3;
    if (*(int *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 + 0x6cc +
                *(longlong *)(param_1 + 0x50)) == 0xa000) {
      cVar4 = FUN_18008dfa8(plVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                            uVar3,uVar2,1,local_48,local_44,0,0,0,8,0,0,0,'\0','\0');
      if (cVar4 != '\0') {
LAB_18008f82b:
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
    }
    else {
      cVar4 = FUN_18008dfa8(plVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                            uVar3,uVar2,1,local_48,local_44,0,local_38,0,0x48,0,
                            -(uint)(uVar2 != 1) & 4,0,'\0','\0');
      if (cVar4 != '\0') {
        if (uVar2 == 1) goto LAB_18008f82b;
        cVar4 = FUN_18008e1d8(param_1 + 0x118,*(longlong **)(param_1 + 0x78),local_44,uVar6,0,'\x01'
                             );
        *(char *)(param_1 + 0x168) = cVar4;
        FUN_18008edb4(param_1);
      }
    }
    if (*(char *)(param_1 + 0x168) != '\0') {
      return true;
    }
    FUN_18008e2ec(plVar1,*(uint *)(param_1 + 0x30),*(uint *)(param_1 + 0x34));
LAB_18008f869:
    bVar7 = false;
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar5 = thunk_FUN_1800fbccc(0x400);
      *(longlong *)(param_1 + 0x10) = lVar5;
      if (lVar5 == 0) goto LAB_18008f869;
    }
    cVar4 = FUN_18008ee3c(param_1,'\x01');
    bVar7 = cVar4 != '\0';
    *(char *)(param_1 + 0x168) = cVar4;
  }
  return bVar7;
}

