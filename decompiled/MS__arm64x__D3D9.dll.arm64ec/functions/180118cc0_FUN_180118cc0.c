/*
 * FUN_180118cc0 at 180118cc0
 * undefined FUN_180118cc0(void)
 * Address ranges: 180118cc0-180118e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180118cc0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *extraout_x11;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  
  lVar5 = *param_3;
  lVar3 = (ulonglong)*(uint *)(param_1 + 0xa0) * 600;
  if (lVar5 == *(longlong *)(&DAT_18024ea38 + lVar3) && *(longlong *)(&DAT_18024ea38 + lVar3) != 0)
  {
    iVar1 = FUN_1801042e0(DAT_180258900 + 0x30);
    if (iVar1 == 1) {
      while (*(int *)(DAT_180258900 + 0x2c) != 0) {
        thunk_FUN_180223c0c(&local_60,0,0,0,0x400000);
      }
    }
    iVar1 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar1 == 0) {
      FUN_1801085c8();
    }
    iVar1 = *(int *)(&DAT_18024ea40 + lVar3);
    *(int *)(&DAT_18024ea40 + lVar3) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      lVar6 = *(longlong *)(&DAT_18024ea30 + lVar3);
      thunk_FUN_180224260(lVar5,*(undefined8 *)(lVar6 + 0x68));
      *(undefined8 *)(lVar6 + 0x68) = 0;
      thunk_FUN_1802242c4(lVar5);
      *(undefined1 *)(lVar6 + 0x8d) = 1;
      *(undefined8 *)(&DAT_18024ea38 + lVar3) = 0;
    }
    lVar5 = DAT_180258900;
    *param_4 = 1;
    thunk_FUN_18022370c(lVar5);
    FUN_1801042d0(DAT_180258900 + 0x30);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if (*param_4 == 1) {
    lVar3 = *(longlong *)(&DAT_18024ea30 + lVar3);
    thunk_FUN_1802242d8();
    local_70 = 0;
    local_68 = *(int *)(lVar3 + 0x2c) + -1;
    iStack_64 = *(int *)(lVar3 + 0x30) + -1;
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,0,0,*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x88),&local_70)
    ;
    local_60 = *(undefined8 *)(lVar3 + 0x98);
    *(undefined1 *)(lVar3 + 0x8d) = 0;
    uStack_58 = 0;
    local_50 = FUN_18021fb80(*(longlong *)(lVar3 + 8) + 8);
    iStack_64 = *(undefined4 *)(lVar3 + 0x30);
    local_4c = 0x200000002;
    local_68 = *(undefined4 *)(lVar3 + 0xa4);
    local_44 = 0;
    local_70 = CONCAT44(*(undefined4 *)(lVar3 + 0x2c),*(undefined4 *)(lVar3 + 0xa0));
    FUN_18012f790(*(undefined8 *)(lVar3 + 0x90),&local_60);
  }
  return uVar4;
}

