/*
 * FUN_10018925 at 10018925
 * undefined4 __thiscall FUN_10018925(void * this, void * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10018925-10018b2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10018925(void *this,void *param_1,undefined4 param_2,undefined4 param_3)

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
  
  uVar3 = DAT_1005974c;
  uVar5 = 0;
  *(void **)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = FUN_100422ab(uVar3,&PTR_s_DGD3D11ROOT_100593ac,0);
  *(WNDPROC *)((int)this + 0x3180) = this_00;
  uVar4 = 0;
  if (this_00 == (WNDPROC)0x0) goto LAB_10018adb;
  FUN_1004387a(this_00,uVar5,(int)this);
  piVar2 = (int *)FUN_10036d29(param_1,local_18);
  uVar3 = FUN_1003f238(*(void **)((int)this + 0x3180),*(int *)((int)this + 0x3184),*piVar2,piVar2[2]
                       ,piVar2[1],(undefined4 *)piVar2[3]);
  if ((char)uVar3 != '\0') {
    *(int *)((int)this + 0x3188) =
         *(int *)((int)this + 0x3180) + *(int *)((int)this + 0x3184) * 0x1510 + 0x510;
    uVar3 = FUN_1001780f(this,*(LPVOID *)((int)this + 0xd8));
    if (((((char)uVar3 != '\0') && (uVar3 = FUN_10017a9a((int)this), (char)uVar3 != '\0')) &&
        (uVar3 = FUN_10017bf0((int)this), (char)uVar3 != '\0')) &&
       (uVar3 = FUN_10017b42((int)this), (char)uVar3 != '\0')) {
      FUN_10018c64((int)this);
      FUN_1001d3ec(this,*(undefined4 *)((int)this + 0x3180),(int)param_1,param_3);
      FUN_100186fd(this);
      uVar3 = FUN_1001bb19((int *)((int)this + 0x32b8));
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_10028dbf((void *)((int)this + 0x3780));
        if ((char)uVar3 != '\0') {
          iVar1 = *(int *)((int)param_1 + 0x33);
          if (iVar1 == 1) {
LAB_10018b06:
            uVar3 = FUN_100286da(*(int *)((int)this + 0xc9fc));
            if ((char)uVar3 != '\0') {
LAB_10018b15:
              LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x3180) + 0x4a0));
              return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
            }
          }
          else if (iVar1 == 2) {
            uVar3 = FUN_100286da(*(int *)((int)this + 0xc9fc));
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_100286da(*(int *)((int)this + 0xca00));
              if ((char)uVar3 != '\0') goto LAB_10018b15;
LAB_10018aa5:
              FUN_10028309(*(int *)((int)this + 0xc9fc));
            }
          }
          else {
            if (iVar1 != 3) goto LAB_10018b06;
            uVar3 = FUN_100286da(*(int *)((int)this + 0xc9fc));
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_100286da(*(int *)((int)this + 0xca00));
              if ((char)uVar3 != '\0') {
                uVar3 = FUN_100286da(*(int *)((int)this + 0xca04));
                if ((char)uVar3 != '\0') goto LAB_10018b15;
                FUN_10028309(*(int *)((int)this + 0xca00));
              }
              goto LAB_10018aa5;
            }
          }
          FUN_1002b55c((int)this + 0x3780);
        }
        FUN_1001bc90((int *)((int)this + 0x32b8));
      }
      FUN_10017d3a((int)this);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x3180) + 0x4a0));
  uVar4 = extraout_EAX;
LAB_10018adb:
  return uVar4 & 0xffffff00;
}

