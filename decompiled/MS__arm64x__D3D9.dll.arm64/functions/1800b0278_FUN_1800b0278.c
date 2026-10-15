/*
 * FUN_1800b0278 at 1800b0278
 * undefined FUN_1800b0278(void)
 * Address ranges: 1800b0278-1800b0477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800b0278(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong extraout_x13;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar4 == 0) {
      FUN_180003398();
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    iVar4 = -0x7789f794;
  }
  else {
    uVar2 = *(uint *)(param_1 + -0x6430);
    uVar1 = uVar2 + 1;
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8) + 8) = 0;
    lVar7 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    uVar5 = (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xf0))
                      (*(longlong **)(param_1 + -0x6810),lVar7,*(undefined8 *)(lVar7 + 8));
    *(undefined1 *)(param_1 + -0x642c) = 0;
    uVar5 = func_0x00018010a4a8(uVar5,param_1 + -0x658,
                                *(longlong *)
                                 (*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8) + 0xa190,
                                *(undefined4 *)(param_1 + -0x59bc));
    uVar5 = func_0x00018010a4a8(uVar5,param_1 + -600,extraout_x13 + 0xa994,0xe0);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8);
    uVar5 = func_0x00018010a4a8(uVar5,param_1 + 600,lVar7 + 0x527c,0x10);
    uVar5 = func_0x00018010a4a8(uVar5,param_1 + 0x268,lVar7 + 0x52a0);
    uVar5 = func_0x00018010a4a8(uVar5,param_1 + 0x278,lVar7 + 0x52c4);
    func_0x00018010a4a8(uVar5,param_1 + 0x288,lVar7 + 0x52e8);
    puVar6 = (undefined8 *)FUN_180102f80(0x30);
    if (puVar6 == (undefined8 *)0x0) {
      iVar4 = 0;
    }
    else {
      *puVar6 = &PTR_FUN_180236890;
      puVar6[1] = 0;
      *(uint *)(puVar6 + 4) = uVar1;
      puVar6[5] = lVar7;
      puVar6[2] = puVar6;
      puVar6[3] = param_1 + -0x6838;
      iVar4 = FUN_1800c3188(puVar6,&DAT_180229558,param_2);
      if ((((iVar4 < 0) && (uVar1 != 0)) && (uVar1 <= *(uint *)(param_1 + -0x6438))) &&
         (*(longlong *)(*(longlong *)(param_1 + -0x6440) + (ulonglong)uVar2 * 8) != 0)) {
        FUN_180005300(param_1 + -0x6838,uVar2);
      }
    }
  }
  if (bVar3) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar4;
}

