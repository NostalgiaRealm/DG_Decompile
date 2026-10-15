/*
 * FUN_1000c319 at 1000c319
 * undefined4 __thiscall FUN_1000c319(void * this, void * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000c319-1000c51e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000c319(void *this,void *param_1,undefined4 param_2,undefined4 param_3)

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
  
  uVar3 = DAT_1005b820;
  uVar5 = 0;
  *(void **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = FUN_10044d93(uVar3,&PTR_s_DGD3D11ROOT_1005b464,0);
  *(WNDPROC *)((int)this + 0x3300) = this_00;
  uVar4 = 0;
  if (this_00 == (WNDPROC)0x0) goto LAB_1000c4cf;
  FUN_10046362(this_00,uVar5,(int)this);
  piVar2 = (int *)FUN_1003980a(param_1,local_18);
  uVar3 = FUN_10041d20(*(void **)((int)this + 0x3300),*(int *)((int)this + 0x3304),*piVar2,piVar2[2]
                       ,piVar2[1],(undefined4 *)piVar2[3]);
  if ((char)uVar3 != '\0') {
    *(int *)((int)this + 0x3308) =
         *(int *)((int)this + 0x3300) + *(int *)((int)this + 0x3304) * 0x1510 + 0x510;
    uVar3 = FUN_1000b28a(this,*(LPVOID *)((int)this + 0xd8));
    if (((((char)uVar3 != '\0') && (uVar3 = FUN_1000b515((int)this), (char)uVar3 != '\0')) &&
        (uVar3 = FUN_1000b66b((int)this), (char)uVar3 != '\0')) &&
       (uVar3 = FUN_1000b5bd((int)this), (char)uVar3 != '\0')) {
      FUN_1000c658((int)this);
      FUN_1000d80f(this,*(undefined4 *)((int)this + 0x3300),(int)param_1,param_3);
      FUN_1000c145(this);
      uVar3 = FUN_1000fc9b((int *)((int)this + 0x3438));
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_1001c6ba((void *)((int)this + 0x3d10));
        if ((char)uVar3 != '\0') {
          iVar1 = *(int *)((int)param_1 + 0x33);
          if (iVar1 == 1) {
LAB_1000c4fa:
            uVar3 = FUN_1001bfb5(*(int *)((int)this + 0xd140));
            if ((char)uVar3 != '\0') {
LAB_1000c509:
              LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x3300) + 0x4a0));
              return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
            }
          }
          else if (iVar1 == 2) {
            uVar3 = FUN_1001bfb5(*(int *)((int)this + 0xd140));
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_1001bfb5(*(int *)((int)this + 0xd144));
              if ((char)uVar3 != '\0') goto LAB_1000c509;
LAB_1000c499:
              FUN_1001bbe4(*(int *)((int)this + 0xd140));
            }
          }
          else {
            if (iVar1 != 3) goto LAB_1000c4fa;
            uVar3 = FUN_1001bfb5(*(int *)((int)this + 0xd140));
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_1001bfb5(*(int *)((int)this + 0xd144));
              if ((char)uVar3 != '\0') {
                uVar3 = FUN_1001bfb5(*(int *)((int)this + 0xd148));
                if ((char)uVar3 != '\0') goto LAB_1000c509;
                FUN_1001bbe4(*(int *)((int)this + 0xd144));
              }
              goto LAB_1000c499;
            }
          }
          FUN_1001f0ae((int)this + 0x3d10);
        }
        FUN_1000fe12((int *)((int)this + 0x3438));
      }
      FUN_1000b7b5((int)this);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x3300) + 0x4a0));
  uVar4 = extraout_EAX;
LAB_1000c4cf:
  return uVar4 & 0xffffff00;
}

