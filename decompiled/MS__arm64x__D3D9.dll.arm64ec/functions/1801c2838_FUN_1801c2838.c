/*
 * FUN_1801c2838 at 1801c2838
 * undefined FUN_1801c2838(void)
 * Address ranges: 1801c2838-1801c29cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801c2838(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x80) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x80) + -0x59c0);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  local_48 = *(undefined4 *)(param_1 + -0x30);
  uStack_44 = *(undefined4 *)(param_1 + -0x2c);
  local_50 = 0;
  if (param_3 == 0) {
    lVar7 = param_1 + (ulonglong)param_2 * 0x10;
    thunk_FUN_180223c70(lVar7 + 0x318,lVar7 + 0x318,&local_50);
    iVar3 = 0;
  }
  else {
    iVar3 = -0x7789f794;
    iVar4 = thunk_FUN_180223c34(auStack_40,param_3);
    if ((iVar4 != 0) && (iVar4 = thunk_FUN_180223c48(param_3,auStack_40), iVar4 != 0)) {
      lVar7 = param_1 + (ulonglong)param_2 * 0x10;
      thunk_FUN_180223c70(lVar7 + 0x318,lVar7 + 0x318,param_3);
      iVar3 = 0;
    }
    if (iVar3 < 0) goto LAB_1801c299c;
  }
  if (*(int *)(param_1 + -0x1c) == 1) {
    uVar5 = 1;
    if (1 < *(ushort *)(param_1 + -0x5c)) {
      do {
        lVar7 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + -0x58) + (ulonglong)(uVar5 + param_2 * 0x10) * 8) + 8);
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(uint *)(lVar7 + 0x48) = *(uint *)(lVar7 + 0x48) | 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + -0x5c));
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + -0x58) + (ulonglong)(param_2 << 4) * 8);
    lVar6 = *(longlong *)(lVar7 + 8);
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 1;
      FUN_18010b470(*(undefined8 *)(lVar7 + 0x28));
    }
  }
LAB_1801c299c:
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar3;
}

