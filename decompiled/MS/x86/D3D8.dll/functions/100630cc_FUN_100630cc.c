/*
 * FUN_100630cc at 100630cc
 * undefined1 __thiscall FUN_100630cc(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5)
 * Address ranges: 100630cc-10063208
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_100630cc(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_44 [44];
  void *local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar1 = param_5;
  param_5._3_1_ = 0;
  local_18 = this;
  FUN_10096014(*(void **)((int)this + -0x48),this,(int)this + -0x88);
  local_10 = 0;
  local_c = 0;
  cVar2 = FUN_10062998((void *)((int)this + -0x88),param_1,param_2,1,'\x01',&local_10,&local_c);
  if (CONCAT31(extraout_var,cVar2) == 0) {
    (**(code **)(**(int **)((int)this + -0x14) + 0x28))(*(int **)((int)this + -0x14),local_44);
    uVar4 = *(uint *)(&DAT_100b04f0 + *(int *)((int)this + -0x6c) * 4);
    if (*(uint *)(&DAT_100b04f0 + *(int *)((int)this + -0x6c) * 4) == 0x18) {
      uVar4 = 0x20;
    }
    local_14 = *(uint *)(&DAT_100b05f0 + *(int *)((int)this + -0x6c) * 4);
    if (7 < uVar4) {
      local_14 = uVar4 >> 3;
    }
    param_5 = (int *)*piVar1;
    local_8 = FUN_100791d2((void *)((int)this + -0x88),*(uint *)((int)this + -0x74),(byte)param_1);
    if (uVar4 < 8) {
      local_8 = local_8 / (byte)(&DAT_100b0660)[*(int *)((int)this + -0x6c)];
    }
    uVar4 = piVar1[1];
    bVar5 = uVar4 == piVar1[3];
    uVar3 = local_8;
    if (uVar4 <= (uint)piVar1[3]) {
      do {
        if (bVar5) {
          uVar3 = piVar1[2];
        }
        FUN_100adac0((undefined4 *)(uVar4 * param_4 + (int)param_5 * local_14 + param_3),
                     (undefined4 *)(uVar4 * local_c + (int)param_5 * local_14 + local_10),
                     (uVar3 - (int)param_5) * local_14);
        uVar4 = uVar4 + 1;
        param_5 = (int *)0x0;
        bVar5 = uVar4 == piVar1[3];
        this = local_18;
      } while (uVar4 <= (uint)piVar1[3]);
    }
    FUN_10062a22((void *)((int)this + -0x88),param_1,param_2);
    param_5._3_1_ = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + -0x48) + 0x4a0));
  return param_5._3_1_;
}

