/*
 * FUN_10025c3c at 10025c3c
 * undefined4 __thiscall FUN_10025c3c(void * this, int param_1, uint param_2, int param_3, undefined4 param_4, undefined * param_5)
 * Address ranges: 10025c3c-10025efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10025c3c(void *this,int param_1,uint param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  void *this_00;
  int *piVar1;
  byte bVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 local_c4 [8];
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  undefined4 local_8c;
  int local_5c [8];
  uint local_3c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_14;
  uint local_10;
  int *local_c;
  char local_6;
  char local_5;
  
  local_14 = this;
  BVar3 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar3 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar9 = 0x80070057;
  if (((param_2 & 0xfffffffc) == 0) && (param_5 != (undefined *)0x0)) {
    local_10 = param_2 & 1;
    if ((local_10 == 0) || (iVar4 = FUN_100021cb(), (char)iVar4 != '\0')) {
      local_c = (int *)(&DAT_1006c4bc + *(int *)((int)this + 0x11c) * 0x228);
    }
    else {
      local_c = (int *)(&DAT_1006c4b0 + *(int *)((int)this + 0x11c) * 0x228);
    }
    FUN_10060d45(&local_9c,0,0x74);
    local_a0 = local_10 << 0x12 | 0x100f;
    local_a4 = 0x7c;
    iVar4 = 1;
    local_1c = 0;
    do {
      this_00 = local_14;
      if (2 < local_1c) break;
      local_24 = (uint)(byte)(&DAT_100644f8)[local_1c];
      if (((*(uint *)(DAT_1006c210 + 0x947) & (&DAT_100644ec)[local_1c]) != 0) &&
         (uVar5 = FUN_10031adf(local_14,local_24), uVar5 != 0xffffffff)) {
        piVar6 = FUN_10024c76(this_00,local_c4,uVar5);
        uVar5 = 0;
        local_18 = 0;
        piVar10 = local_5c;
        for (iVar7 = 8; piVar1 = local_c, iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar10 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar10 = piVar10 + 1;
        }
        while ((iVar4 != 0 && (uVar5 < (uint)piVar1[1]))) {
          iVar7 = *piVar1;
          iVar8 = uVar5 * 0x18;
          local_98 = *(int *)(iVar7 + iVar8);
          local_94 = (uint)(*(int *)(iVar7 + iVar8) * local_5c[3]) >> 3;
          local_9c = *(int *)(iVar7 + 4 + iVar8);
          if (local_10 == 0) {
            local_8c = 0;
          }
          else {
            local_8c = *(undefined4 *)(iVar7 + 0x10 + iVar8);
          }
          uVar5 = 0x1000c37c;
          if (local_24 != 8) {
            uVar5 = 0x1000e27c;
          }
          if (((local_98 == 0x140) && (local_9c == 200)) && (local_24 == 8)) {
            local_6 = '\x01';
LAB_10025e06:
            local_5 = '\x01';
          }
          else {
            local_6 = '\0';
            if (((local_98 == 0x140) && ((local_9c == 200 || (local_9c == 0xf0)))) &&
               (local_24 == 8)) goto LAB_10025e06;
            local_5 = '\0';
          }
          local_3c = uVar5;
          local_28 = local_98;
          local_20 = local_9c;
          bVar2 = FUN_10024f28((int)&local_a4,param_3);
          if (bVar2 != 0) {
            if (((*(byte *)((int)local_14 + 0x104) & 0x40) != 0) && (local_5 != '\0')) {
              local_3c = uVar5 | 0x200000;
              iVar4 = FUN_10034c6e(param_1,&local_a4,param_5,param_4);
              uVar5 = local_3c & 0xffdfffff;
              local_3c = uVar5;
            }
            if (iVar4 != 0) {
              if (((param_2 & 2) != 0) && (local_6 != '\0')) {
                local_3c = uVar5 | 0x40000000;
                iVar4 = FUN_10034c6e(param_1,&local_a4,param_5,param_4);
                local_3c = local_3c & 0xbfffffff;
              }
              if (((iVar4 != 0) && (local_5 == '\0')) && (local_6 == '\0')) {
                iVar4 = FUN_10034c6e(param_1,&local_a4,param_5,param_4);
              }
            }
          }
          uVar5 = local_18 + 1;
          local_18 = uVar5;
        }
      }
      local_1c = local_1c + 1;
    } while (iVar4 != 0);
    uVar9 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar9;
}

