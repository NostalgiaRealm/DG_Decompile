/*
 * FUN_18008ee3c at 18008ee3c
 * char __fastcall FUN_18008ee3c(longlong param_1, char param_2)
 * Address ranges: 18008ee3c-18008f086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18008ee3c(longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 local_648;
  uint local_644;
  int local_63c;
  undefined8 local_628;
  undefined4 auStack_620 [382];
  
  uVar11 = 0;
  cVar7 = '\x01';
  if (*(longlong *)(param_1 + 0x78) == 0) {
    FUN_1800ac794(param_1,(undefined8 *)&local_648);
    uVar1 = *(uint *)(param_1 + 0x2c);
    bVar6 = false;
    uVar13 = 0;
    if ((uVar1 - 0x15 < 0xb) ||
       ((bVar5 = bVar6,
        *(uint *)(&DAT_1800ff000 + (ulonglong)uVar1 * 4) <=
        (-(uint)(*(int *)(param_1 + 0x44) != 0) & 0xfffffffe) + 7 && (*(int *)(param_1 + 0x38) == 0)
        ))) {
      bVar5 = true;
    }
    uVar1 = *(uint *)(&DAT_1800ff000 + (ulonglong)uVar1 * 4);
    if ((bVar5) && (*(int *)(param_1 + 0x34) != 1)) {
      bVar6 = true;
      uVar13 = 4;
    }
    uVar12 = local_644;
    if ((*(int *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 + 0x6cc +
                 *(longlong *)(param_1 + 0x50)) == 0xa000) && (uVar12 = uVar11, !bVar6)) {
      uVar12 = local_644;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
    if ((lVar4 != 0) && (*(int *)(param_1 + 0x34) != 0)) {
      uVar2 = *(uint *)(param_1 + 0x3c);
      do {
        uVar14 = 0;
        if (uVar2 != 0) {
          iVar3 = *(int *)(param_1 + 0x30);
          do {
            uVar10 = (ulonglong)(uVar2 * uVar11 + uVar14);
            uVar8 = -(uint)(uVar14 < *(uint *)(param_1 + 0x30)) & uVar14;
            uVar14 = uVar14 + 1;
            uVar9 = (ulonglong)(iVar3 * uVar11 + uVar8);
            (&local_628)[uVar10 * 2] = *(undefined8 *)(lVar4 + uVar9 * 0x10);
            auStack_620[uVar10 * 4] = *(undefined4 *)(lVar4 + 8 + uVar9 * 0x10);
            auStack_620[uVar10 * 4 + 1] = 0;
          } while (uVar14 < uVar2);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x34));
    }
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x3c);
    cVar7 = FUN_18008dfa8((longlong *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x24),
                          *(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x3c),
                          *(uint *)(param_1 + 0x34),1,local_648,uVar12,local_63c,0,0,
                          (-(uint)(uVar1 < 8) & 0xffffffe0) + 0x28,0,uVar13,
                          -(ulonglong)(lVar4 != 0) & (ulonglong)&local_628,'\0','\0');
    if (((cVar7 != '\0') && (param_2 != '\0')) && (bVar6)) {
      cVar7 = FUN_18008e1d8(param_1 + 0x118,*(longlong **)(param_1 + 0x78),local_644,uVar9,0,'\x01')
      ;
      FUN_18008edb4(param_1);
      if (cVar7 == '\0') {
        FUN_18008e2ec((longlong *)(param_1 + 0x60),1,1);
      }
    }
  }
  return cVar7;
}

