/*
 * FUN_180005e24 at 180005e24
 * uint __fastcall FUN_180005e24(WNDPROC param_1, uint param_2, uint param_3, uint * param_4)
 * Address ranges: 180005e24-180006493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180005e24(WNDPROC param_1,uint param_2,uint param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  
  cVar1 = FUN_180006b64(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = 8;
  uVar3 = 0;
  if (param_2 < 0x15) {
    if (param_2 != 0x14) {
      if (param_2 < 0xb) {
        if ((param_2 != 10) && (param_2 != 1)) {
          uVar5 = 0x10;
          if ((param_2 == 2) || (iVar2 = param_2 - 3, uVar5 = uVar4, iVar2 == 0))
          goto LAB_180005f0a;
LAB_180005eaa:
          if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) && ((iVar2 != 4 && (iVar2 != 5)))) {
            bVar6 = iVar2 == 6;
            goto LAB_180005fd5;
          }
        }
      }
      else if (((param_2 != 0xb) && (param_2 != 0xc)) && (iVar2 = param_2 - 0xd, iVar2 != 0))
      goto LAB_180005eaa;
    }
LAB_180005f04:
    uVar5 = 4;
  }
  else {
    if (param_2 < 0x20) {
      if ((((param_2 != 0x1f) && (param_2 != 0x15)) && (param_2 != 0x16)) &&
         ((((param_2 != 0x17 && (param_2 != 0x18)) &&
           ((param_2 != 0x19 && ((param_2 != 0x1a && (param_2 != 0x1b)))))) &&
          (iVar2 = param_2 - 0x1c, iVar2 != 0)))) {
LAB_180005fd3:
        bVar6 = iVar2 == 2;
LAB_180005fd5:
        uVar5 = uVar3;
        if (!bVar6) goto LAB_180005f0a;
      }
      goto LAB_180005f04;
    }
    if (param_2 == 0x20) goto LAB_180005f04;
    if (param_2 == 0x22) {
      uVar5 = 0x18;
    }
    else {
      if ((param_2 == 0x23) || (param_2 == 0x24)) goto LAB_180005f04;
      uVar5 = uVar4;
      if ((param_2 != 0x25) &&
         (((uVar5 = 0x10, param_2 != 0x26 && (uVar5 = uVar4, param_2 != 0x27)) &&
          (iVar2 = param_2 - 0x28, iVar2 != 0)))) goto LAB_180005fd3;
    }
  }
LAB_180005f0a:
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (param_3 < uVar5) {
    return 0;
  }
  if (param_2 < 0x15) {
    if (param_2 == 0x14) {
      if (param_1[100] == (WNDPROC)0x0) goto LAB_1800063df;
      LOCK();
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      UNLOCK();
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe8))();
      *param_4 = uVar3;
      goto LAB_18000601d;
    }
    if (10 < param_2) {
      if (param_2 == 0xb) {
        *param_4 = 3;
        return uVar5;
      }
      if (param_2 == 0xc) {
        uVar4 = FUN_1800079d4(param_1);
        if ((&DAT_18006d299)[(ulonglong)uVar4 * 0x20] == '\0') {
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82b);
        }
      }
      else {
        if (param_2 != 0xd) {
          if (param_2 == 0xe) {
            uVar4 = FUN_1800079d4(param_1);
            if ((&DAT_18006d299)[(ulonglong)uVar4 * 0x20] != '\0') {
              uVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f) +
                      *(int *)(*(longlong *)(param_1 + 0x30) + 0x82b);
            }
LAB_18000614d:
            *param_4 = uVar3;
            return uVar5;
          }
          if (param_2 != 0xf) {
            if (param_2 == 0x10) goto LAB_1800063df;
            if (param_2 != 0x11) {
              if (param_2 == 0x12) {
                *param_4 = 6;
                return uVar5;
              }
              if (param_2 != 0x13) {
                return uVar5;
              }
              uVar3 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x833);
              goto LAB_18000614d;
            }
          }
LAB_180005f87:
          *param_4 = 1;
          return uVar5;
        }
        uVar4 = FUN_1800079d4(param_1);
        if ((&DAT_18006d299)[(ulonglong)uVar4 * 0x20] == '\0') {
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x82f);
        }
      }
      goto LAB_180006476;
    }
    if (param_2 == 10) {
LAB_1800060b5:
      *param_4 = 0x100;
      return uVar5;
    }
    if (param_2 == 1) {
      *param_4 = 0x10;
      return uVar5;
    }
    if (param_2 == 2) {
      param_4[1] = 6;
      param_4[2] = 5;
      param_4[3] = 8;
      uVar3 = 5;
      goto LAB_180006476;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        *param_4 = 0x40;
        return uVar5;
      }
      if (param_2 != 5) {
        if (param_2 == 6) {
          *param_4 = 0x21f;
          return uVar5;
        }
        if (param_2 == 7) {
          *param_4 = 0x70;
          return uVar5;
        }
        if (param_2 != 8) {
          if (param_2 != 9) {
            return uVar5;
          }
          goto LAB_180005f87;
        }
        if (param_1[100] == (WNDPROC)0x0) goto LAB_1800063df;
        LOCK();
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        UNLOCK();
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
        *param_4 = (uint)(cVar1 != '\0');
        goto LAB_18000601d;
      }
      goto LAB_1800060b5;
    }
    if (param_1[100] == (WNDPROC)0x0) {
LAB_18000642b:
      param_4[0] = 0;
      param_4[1] = 0;
      return uVar5;
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
    uVar4 = uVar3;
    if (cVar1 != '\0') {
      fVar7 = FUN_18005f970();
      uVar4 = (uint)(longlong)(fVar7 * 65536.0);
      uVar3 = uVar4 << 8;
      uVar4 = uVar4 & 0xffffff;
    }
    *param_4 = uVar3;
  }
  else {
    if (param_2 < 0x20) {
      if (param_2 == 0x1f) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_60;
      }
      else if (param_2 == 0x15) {
        uVar3 = FUN_1800079d4(param_1);
        uVar3 = *(uint *)(&DAT_18006d290 + (ulonglong)uVar3 * 0x20);
      }
      else if (param_2 == 0x16) {
        uVar3 = FUN_1800079d4(param_1);
        uVar3 = *(uint *)(&DAT_18006d294 + (ulonglong)uVar3 * 0x20);
      }
      else if (param_2 == 0x17) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_84;
      }
      else if (param_2 == 0x18) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_7c;
      }
      else if (param_2 == 0x19) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_78;
      }
      else if (param_2 == 0x1a) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_70;
      }
      else if (param_2 == 0x1b) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_68;
      }
      else if (param_2 == 0x1c) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_64;
      }
      else {
        if (param_2 != 0x1e) {
          return uVar5;
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                  (*(longlong **)(param_1 + 0x18),&local_88);
        uVar3 = local_88;
      }
LAB_180006476:
      *param_4 = uVar3;
      return uVar5;
    }
    if (param_2 == 0x20) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))
                (*(longlong **)(param_1 + 0x18),&local_88);
      uVar3 = local_80;
      goto LAB_180006476;
    }
    if (param_2 == 0x22) {
      if (param_1[100] == (WNDPROC)0x0) {
        param_4[0] = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        return uVar5;
      }
      LOCK();
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      UNLOCK();
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x128))(*(longlong **)(param_1 + 0x18),param_4)
      ;
      goto LAB_18000601d;
    }
    if (param_2 == 0x23) {
LAB_1800063df:
      *param_4 = 0;
      return uVar5;
    }
    if (param_2 == 0x24) {
LAB_180006376:
      *param_4 = 8;
      return uVar5;
    }
    if (param_2 != 0x25) {
      if (param_2 == 0x26) {
        if (param_1[100] != (WNDPROC)0x0) {
          LOCK();
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          UNLOCK();
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x268))
                    (*(longlong **)(param_1 + 0x18),param_4,param_4 + 1,param_4 + 2,param_4 + 3);
          goto LAB_18000601d;
        }
        param_4[3] = 0;
        param_4[2] = 0;
        param_4[1] = 0;
        goto LAB_1800063df;
      }
      if (param_2 == 0x27) {
        *param_4 = 0;
        param_4[1] = 0xffff;
        return uVar5;
      }
      if (param_2 == 0x28) {
        param_4[0] = 0xffff;
        param_4[1] = 0;
        return uVar5;
      }
      if (param_2 != 0x2a) {
        return uVar5;
      }
      goto LAB_180006376;
    }
    if (param_1[100] == (WNDPROC)0x0) goto LAB_18000642b;
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))();
    *param_4 = uVar3;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xa8);
    fVar7 = FUN_18005f970();
    uVar4 = (uint)(fVar7 * (float)(iVar2 - 1));
  }
  param_4[1] = uVar4;
LAB_18000601d:
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
  return uVar5;
}

