/*
 * FUN_1802203b8 at 1802203b8
 * undefined FUN_1802203b8(void)
 * Address ranges: 1802203b8-18022054f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802203b8(longlong param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int local_c0 [2];
  undefined4 local_b8 [2];
  code *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  local_a0 = 0;
  uStack_98 = 0;
  local_b8[0] = 3;
  local_b0 = FUN_18021fef0;
  uStack_a8 = 0;
  local_90 = 0;
  local_88 = thunk_FUN_180224328(4);
  uStack_80 = 0;
  local_78 = u_DGVOODOOCOMM_180239f98;
  sVar2 = thunk_FUN_1802240a8(local_b8);
  if (sVar2 != 0) {
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uVar4 = thunk_FUN_18022410c(0,u_DGVOODOOCOMM_180239f98,&local_40,0,0x80000000,0x80000000,
                                0x80000000,0x80000000,0xfffffffffffffffd,0,0,0);
    *(undefined8 *)(param_1 + 0x380) = uVar4;
    thunk_FUN_1802240bc(auStack_70,0,0,0,0);
    uVar4 = DAT_180258b80;
    if (*(longlong *)(param_1 + 0x380) != 0) {
      *(undefined1 *)(param_1 + 0x7e8) = 1;
      thunk_FUN_180223874(uVar4);
      while (iVar3 = thunk_FUN_180224134(auStack_70,0,0,0), 0 < iVar3) {
        thunk_FUN_180224094(auStack_70);
        thunk_FUN_1802240d0(auStack_70);
      }
      iVar3 = thunk_FUN_1802240e4(*(undefined8 *)(param_1 + 0x3b0));
      bVar1 = iVar3 == 1;
      if (iVar3 == 1) {
        local_c0[0] = 0;
        thunk_FUN_180223ec8(*(undefined8 *)(param_1 + 0x3b0),local_c0);
        bVar1 = local_c0[0] == *(int *)(param_1 + 0x3b8);
      }
      if ((*(longlong *)(param_1 + 0x3b0) != 0) && (!bVar1)) {
        FUN_18021fe78(param_1,1);
      }
      thunk_FUN_180224120(*(undefined8 *)(param_1 + 0x380));
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    thunk_FUN_180224008(sVar2,0);
  }
  uVar4 = DAT_180258b80;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  thunk_FUN_180223874(uVar4);
  return 1;
}

