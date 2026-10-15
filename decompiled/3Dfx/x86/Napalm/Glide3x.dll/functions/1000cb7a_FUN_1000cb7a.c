/*
 * FUN_1000cb7a at 1000cb7a
 * undefined4 __thiscall FUN_1000cb7a(void * this, void * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000cb7a-1000cd7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000cb7a(void *this,void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  WNDPROC this_00;
  int *piVar2;
  undefined4 uVar3;
  uint extraout_EAX;
  uint uVar4;
  undefined4 extraout_EAX_00;
  undefined4 uVar5;
  undefined4 local_18 [5];
  
  uVar3 = DAT_1005fa00;
  uVar5 = 0;
  *(void **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = FUN_1004819c(uVar3,&PTR_s_DGD3D11ROOT_1005f638,0);
  *(WNDPROC *)((int)this + 0x3680) = this_00;
  uVar4 = 0;
  if (this_00 == (WNDPROC)0x0) goto LAB_1000cd30;
  FUN_1004976b(this_00,uVar5,(int)this);
  piVar2 = (int *)FUN_1003cc18(param_1,local_18);
  uVar3 = FUN_10045129(*(void **)((int)this + 0x3680),*(int *)((int)this + 0x3684),*piVar2,piVar2[2]
                       ,piVar2[1],(undefined4 *)piVar2[3]);
  if ((char)uVar3 != '\0') {
    *(int *)((int)this + 0x3688) =
         *(int *)((int)this + 0x3680) + *(int *)((int)this + 0x3684) * 0x1510 + 0x510;
    uVar3 = FUN_1000baeb(this,*(LPVOID *)((int)this + 0xdc));
    if (((((char)uVar3 != '\0') && (uVar3 = FUN_1000bd76((int)this), (char)uVar3 != '\0')) &&
        (uVar3 = FUN_1000becc((int)this), (char)uVar3 != '\0')) &&
       (uVar3 = FUN_1000be1e((int)this), (char)uVar3 != '\0')) {
      FUN_1000ceb0((int)this);
      FUN_1000eaa3(this,*(undefined4 *)((int)this + 0x3680),(int)param_1,param_3);
      FUN_1000c9a6(this);
      uVar3 = FUN_10010f7d((int *)((int)this + 0x37b8));
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_1001e8a7((void *)((int)this + 0x4090));
        if ((char)uVar3 != '\0') {
          iVar1 = *(int *)((int)param_1 + 0x33);
          if (iVar1 == 1) {
LAB_1000cd5b:
            uVar3 = FUN_1001e1a2(*(int *)((int)this + 0xd4f0));
            if ((char)uVar3 != '\0') {
LAB_1000cd6a:
              LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x3680) + 0x4a0));
              return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
            }
          }
          else if (iVar1 == 2) {
            uVar3 = FUN_1001e1a2(*(int *)((int)this + 0xd4f0));
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_1001e1a2(*(int *)((int)this + 0xd4f4));
              if ((char)uVar3 != '\0') goto LAB_1000cd6a;
LAB_1000ccfa:
              FUN_1001ddc5(*(int *)((int)this + 0xd4f0));
            }
          }
          else {
            if (iVar1 != 3) goto LAB_1000cd5b;
            uVar3 = FUN_1001e1a2(*(int *)((int)this + 0xd4f0));
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_1001e1a2(*(int *)((int)this + 0xd4f4));
              if ((char)uVar3 != '\0') {
                uVar3 = FUN_1001e1a2(*(int *)((int)this + 0xd4f8));
                if ((char)uVar3 != '\0') goto LAB_1000cd6a;
                FUN_1001ddc5(*(int *)((int)this + 0xd4f4));
              }
              goto LAB_1000ccfa;
            }
          }
          FUN_1001ec5b((int)this + 0x4090);
        }
        FUN_10011162((int *)((int)this + 0x37b8));
      }
      FUN_1000c016((int)this);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x3680) + 0x4a0));
  uVar4 = extraout_EAX;
LAB_1000cd30:
  return uVar4 & 0xffffff00;
}

