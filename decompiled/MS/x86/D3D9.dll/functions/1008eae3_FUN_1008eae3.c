/*
 * FUN_1008eae3 at 1008eae3
 * bool __thiscall FUN_1008eae3(void * this, int param_1, int param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 1008eae3-1008ec58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1008eae3(void *this,int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int extraout_EDX;
  undefined1 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_98 [72];
  undefined1 local_50 [76];
  
  bVar7 = true;
  if (param_1 != 0) {
    puVar2 = FUN_1008e138(this,param_1);
    if (puVar2 == (undefined4 *)0x0) {
      local_ac = param_5;
      local_bc = FUN_100b8d99(*(void **)((int)this + 0x10),param_1);
      local_b8 = param_2;
      local_b0 = param_3;
      local_b4 = param_4;
      local_9c = param_7;
      local_9b = 0;
      local_a8 = param_6;
      local_a4 = 1;
      local_a0 = 1;
      FUN_1007c09a(local_50,0,*(undefined4 *)((int)this + 0x14),param_1);
      local_c0 = FUN_100b869b(*(void **)((int)this + 0x10),extraout_ECX);
      if (local_c0 == (int *)0x0) {
        iVar1 = *(int *)((int)this + 4);
        uVar5 = *(undefined4 *)(iVar1 + 0xde);
        uVar6 = *(int *)(iVar1 + 0x18) == 1;
        uVar11 = *(undefined4 *)(iVar1 + 0xda);
        uVar9 = *(undefined1 *)(iVar1 + 0x26);
        uVar3 = (uint)(param_4 == 1);
        uVar8 = *(undefined4 *)(&DAT_100d4028 + *(int *)(iVar1 + 0xce) * 4);
        uVar10 = extraout_ECX_00;
        uVar4 = FUN_1008e318(param_2);
        FUN_1007b86d(local_98,this,*(undefined4 *)((int)this + 0x14),param_1,1,1,1,1,0,1,
                     *(undefined4 *)(&DAT_100d403c + *(int *)(extraout_EDX + 0x1c) * 4),
                     extraout_ECX_01,uVar4,uVar8,uVar3,uVar9,uVar6,uVar10,uVar11,uVar5);
        local_c0 = FUN_100b869b(*(void **)((int)this + 0x10),extraout_ECX_02);
        bVar7 = local_c0 != (int *)0x0;
        if (bVar7) {
          FUN_100b92a4(*(void **)((int)this + 0x10),(int)local_c0,(int *)((int)this + 0x1c228),
                       (undefined4 *)((int)this + 0xc));
        }
      }
      if ((bVar7 != false) &&
         (uVar5 = FUN_1008f032((void *)((int)this + 0x10098),&local_c0), (char)uVar5 == '\0')) {
        FUN_100b8c84(*(void **)((int)this + 0x10),param_1,(int)this);
        bVar7 = false;
      }
    }
    else {
      FUN_1007c09a(local_98,0,*(undefined4 *)((int)this + 0x14),param_1);
      FUN_100b869b(*(void **)((int)this + 0x10),extraout_ECX_03);
    }
  }
  return bVar7;
}

